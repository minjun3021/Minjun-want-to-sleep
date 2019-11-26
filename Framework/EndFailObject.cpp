#include "stdafx.h"
#include "EndFailObject.h"


EndFailObject::EndFailObject() : GameObject(L"fail.png")
{
	transform->position.x = ScreenWidth / 2;
	transform->position.y = ScreenHeight/ 2;
}

void EndFailObject::Update()
{
}


