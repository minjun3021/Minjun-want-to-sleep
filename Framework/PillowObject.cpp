#include "stdafx.h"
#include "PillowObject.h"



PillowObject::PillowObject(Player* player) : GameObject(L"pillow.png")
, col(*transform,Vector2(70,70)),player(player)
{
	isChecked = false;
	player->count++;
	if (!player->isInitialized) {
		srand((unsigned int)time(NULL));
		player->isInitialized = true;

	}

	if (player->count %2) {
		transform->position.x =(rand()%1070)+pillowHalfWidth;
		transform->position.y = pillowHalfHeight;
	}
	else {
		transform->position.x = ScreenWidth-pillowHalfWidth;
		transform->position.y = (rand()%500)+pillowHalfHeight;
	}

	
	timer = 2;
	
}

void PillowObject::Update()
{
	if (timer >= 1) {
		transform->SetRotation(transform->rotatingAngle + 15);

	}
	else if (timer >= 0) {
		transform->SetRotation(transform->rotatingAngle + 30);
	}
	else {
		if (!isChecked) {
			addX=-(player->transform->position.x+playerHalfWidth - transform->position.x)/ pillowSpeed;
			addY = -(player->transform->position.y-playerHalfHeight - transform->position.y)/ pillowSpeed;
			isChecked = true;
		}
		transform->position.x -= addX;
		transform->position.y -= addY;

	}
	timer -= TimeManager::GetDeltaTime();

	
	if (col.Intersected(player->col))
	{
		Scene::ChangeScene(new EndScene(0));
		player->se->Stop();
	}
	if (transform->position.x + playerHalfWidth<0 || transform->position.y - playerHalfHeight>ScreenHeight) {
		Scene::GetCurrentScene().Destroy(this);
		player->isInitialized = false;
	}
}


