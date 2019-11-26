#include "stdafx.h"
#include "EndScene.h"



EndScene::EndScene(int kindOfView) : kindOfView(kindOfView)
{
}

void EndScene::Initialize()
{
	if (kindOfView == 0) {
		PushBackGameObject(new EndFailObject());

	}
	else {
		PushBackGameObject(new EndSuccessObject());

	}
	player = (EndPlayer*)PushBackGameObject(new EndPlayer());
}
