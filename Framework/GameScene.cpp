#include "stdafx.h"
#include "GameScene.h"

#include "Player.h"

void GameScene::Initialize()
{
	MainBackObject* mainBackObject = (MainBackObject*)PushBackGameObject(new MainBackObject());


	AlarmObject* a = (AlarmObject*)PushBackGameObject(new AlarmObject());
	a->transform->SetPosition(1090,100);
	player = (Player*)PushBackGameObject(new Player());			//������Ʈ�� �����ϰ� �ʹٸ�, PushBackGameObject�Լ��� ȣ���Ͽ� �����մϴ�.
	player->transform->SetPosition(80, 529);
	player->alarm = a;



}
