#include "stdafx.h"
#include "StartScene.h"
#include "StartFontObject.h"
#include "StartPlayer.h"

void StartScene::Initialize()
{
	BackGroundObject* t = (BackGroundObject*)PushBackGameObject(new BackGroundObject());		

	player = (StartPlayer*)PushBackGameObject(new StartPlayer());
	PushBackGameObject(new StartFontObject());
}

