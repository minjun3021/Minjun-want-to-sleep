#include "stdafx.h"
#include "EndSuccessObject.h"


EndSuccessObject::EndSuccessObject() : GameObject(L"success.png")
{
	transform->position.x = ScreenWidth / 2;
	transform->position.y = ScreenHeight / 2;
}

void EndSuccessObject::Update()
{
}


