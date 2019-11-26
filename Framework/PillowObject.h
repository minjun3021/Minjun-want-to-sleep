#pragma once
#include "GameObject.h"
#include "AABBCollider.h"
#include "Util.h"
#include "Player.h"
#include "Scene.h"
#include <iostream>
#include <cstdlib>
#include "EndScene.h"
#include <ctime>

class PillowObject :
	public GameObject
{
public:
	bool isChecked;
	AABBCollider col;
	float timer;
	Player* player;
	float addX;
	float addY;
	PillowObject(Player* player);
	void Update();
};

