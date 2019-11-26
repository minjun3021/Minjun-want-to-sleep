#pragma once
#include "GameObject.h"
#include "InputManager.h"
#include "Scene.h"
#include "GameScene.h"
class EndPlayer :
	public GameObject
{
public:
	EndPlayer();
	virtual void Update();
	virtual void LateUpdate();
};

