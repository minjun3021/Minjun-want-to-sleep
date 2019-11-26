#include "stdafx.h"
#include "Framework.h"
#include "GameScene.h"
#include "Math.h"
#include "Util.h"
#include "StartScene.h"

int main()
{
	Framework& f = Framework::GetInstance();
	f.Run(new StartScene(),L"≈∏¿Ã∆≤", ScreenWidth, ScreenHeight, false);
	return 0;
}