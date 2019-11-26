#include "stdafx.h"
#include "Player.h"


Player::Player()
	:GameObject(animRenderer = new AnimationRenderer()),		//GameObject(animRenderer = new AnimationRenderer), 애니메이션렌더러를 사용합니다. 일반적인 이미지 렌더러를 사용하시는 것은 TestObject를 참고하세요.
	moveSpeed(10.0f), gravity(40.0f),
	col(*transform, Vector2(42.0f, 128.0f))
{
	isInitialized = false;
	isFinished = false;
	onceLeftChanged = false;
	onceRightChanged = false;
	isFloating = false;
	timer = 24.0f;
	timer1 = spawnTime;

	SheetAnimation* sanimR = new SheetAnimation(1, 16.0f, L"player.png", 101.5, 141.5, 4);
	SheetAnimation* sanimL = new SheetAnimation(0, 16.0f, L"playerL.png", 101.5, 141.5, 4);


	animRenderer->PushBackAnimation(sanimR);
	animRenderer->PushBackAnimation(sanimL);
	animRenderer->ChangeAnimation(1);
	se = new SoundEvent();
	se->LoadFile(L"GoodMorning.wav");

	//객체의 위치, 각도, 크기조정은 transform에 등록되어있습니다. Transform.h, GameObject.h 참고
	transform->SetPosition(300.0f, 300.0f);	//Player의 초기 위치 설정

	//현재 Scene을 얻어오고 싶으시다면 아래와 같이 사용하시면 됩니다.
	
	se->Play();

}


void Player::Update()
{
	if (InputManager::GetKeyDown('S')) {

	}

	if (!isFinished) {
		timer -= TimeManager::GetDeltaTime();

	}
	timer1 -= TimeManager::GetDeltaTime();
	if (timer1 <= 0) {
		Scene::GetCurrentScene().PushBackGameObject(new PillowObject(this));
		timer1 = spawnTime;
	}
	if (timer <= 0) {
		se->Stop();
		timer = 24.0f;
		se->Play();


	}



	if (InputManager::GetKeyDown(VK_UP) && !isFloating) {
		isFloating = true;
		velocity = 0;
		velocity -= gravity * 0.4f;
	}
	if (InputManager::GetMyKeyState(VK_DOWN)) {

		velocity += gravity * 2.5f * TimeManager::GetDeltaTime();
	}
	if (InputManager::GetMyKeyState(VK_RIGHT)) {
		if (!onceRightChanged) {
			animRenderer->ChangeAnimation(1);
			onceRightChanged = true;

		}
		transform->position.x += moveSpeed;
		onceLeftChanged = false;
	}
	if (InputManager::GetMyKeyState(VK_LEFT))
	{
		if (!onceLeftChanged) {
			animRenderer->ChangeAnimation(0);
			onceLeftChanged = true;
		}
		transform->position.x -= moveSpeed;

		onceRightChanged = false;
	}

	if (InputManager::GetMyKeyState(VK_NUMPAD4))
		transform->scale += (2 - transform->scale.x) / 7;
	if (InputManager::GetMyKeyState(VK_NUMPAD6))
		transform->scale -= (transform->scale.x - 1) / 7;


	transform->position.y += velocity;

}

void Player::LateUpdate()
{

	if (transform->position.x + playerHalfWidth > ScreenWidth) { //오른쪽
		transform->position.x = ScreenWidth - playerHalfWidth;
	}
	if (transform->position.x - playerHalfWidth < 0) { //왼쪽
		transform->position.x = playerHalfWidth;
	}
	if (transform->position.y - playerHalfHeight < 0) { //위
		velocity = 0;
		transform->position.y = playerHalfHeight;
	}
	if (transform->position.y + playerHalfHeight > ScreenHeight) { //아래
		isFloating = false;
		velocity = 0;
		transform->position.y = ScreenHeight - playerHalfHeight;
	}
	if (transform->position.x >= 919 && velocity >= 0 && transform->position.y >= 410 && transform->position.y <= 430) {
		transform->position.y = 409;
		velocity = 0;
		isFloating = false;
	}

	if (transform->position.x >= 1000 && transform->position.x <= 1139 && velocity > 0 && transform->position.y >= 260 && transform->position.y <= 300) {


		transform->position.y = 259;
		velocity = 0;
		isFloating = false;



	}
	velocity += gravity * TimeManager::GetDeltaTime();

	if (col.Intersected(alarm->col2))
	{
		timer = 25.0f;
		isFinished = true;
		se->Stop();
		printf("알람 끔\n");
		Scene::ChangeScene(new EndScene(1));
	}

}
