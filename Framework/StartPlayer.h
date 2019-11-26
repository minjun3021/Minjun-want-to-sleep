#pragma once
#include "GameObject.h"
#include "GameObject.h"
#include "AABBCollider.h"

#include "Scene.h"
#include "AnimationRenderer.h"
#include "SoundEvent.h"
#include "InputManager.h"
#include "GameScene.h"
#include "TimeManager.h"
#include "ListAnimation.h"
#include "SheetAnimation.h"
#include "Util.h"
class StartPlayer :
	public GameObject
{
public:
	float timer;
	SoundEvent* se;
	StartPlayer();
	
	virtual void Update();		
	virtual void LateUpdate();

};

