#pragma once
#include "Scene.h"
#include "StartPlayer.h"
#include "BackGroundObject.h"
class StartScene :
	public Scene
{
public:
	virtual void Initialize();

	StartPlayer* player;
};

