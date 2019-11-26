#pragma once
#include "Scene.h"
#include "EndPlayer.h"
#include "EndSuccessObject.h"
#include "EndFailObject.h"
class EndScene :
	public Scene
{
public:
	int kindOfView;
	EndScene(int kindOfView);
	virtual void Initialize();
	EndPlayer* player;
};

