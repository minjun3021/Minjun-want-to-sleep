#pragma once
#include "AABBCollider.h"
#include "CircleCollider.h"
#include "GameObject.h"
class AlarmObject
	:public GameObject
{
public:
	CircleCollider col2;
	GameObject* player;

	AlarmObject();
	void Update();
};

