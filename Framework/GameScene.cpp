#include "stdafx.h"
#include "GameScene.h"

#include "Player.h"

void GameScene::Initialize()
{
	MainBackObject* mainBackObject = (MainBackObject*)PushBackGameObject(new MainBackObject());


	AlarmObject* a = (AlarmObject*)PushBackGameObject(new AlarmObject());
	a->transform->SetPosition(1090,100);
	player = (Player*)PushBackGameObject(new Player());			//오브젝트를 생성하고 싶다면, PushBackGameObject함수를 호출하여 생성합니다.
	player->transform->SetPosition(80, 529);
	player->alarm = a;



}
