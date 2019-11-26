#include "stdafx.h"
#include "MainBackObject.h"
#include "Util.h"


MainBackObject::MainBackObject() : GameObject(L"bed.png")
{
	transform->SetPosition(ScreenWidth/2, ScreenHeight/2);
}



void MainBackObject::Update()
{
}
