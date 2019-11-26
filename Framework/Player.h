#pragma once
#include "GameObject.h"
#include "AABBCollider.h"
#include "Scene.h"
#include "AnimationRenderer.h"
#include "SoundEvent.h"
#include "InputManager.h"
#include "GameScene.h"
#include "PillowObject.h"
#include "TimeManager.h"
#include "ListAnimation.h"
#include "SheetAnimation.h"
#include "Util.h"
#include "AlarmObject.h"

//Player는 임의로 생성한 객체입니다.
//게임 내의 오브젝트는 GameObject객체를 상속받아 생성하여야합니다.
class Player :
	public GameObject
{
public:
	float timer;
	bool isFinished;
	bool onceRightChanged;
	bool onceLeftChanged;
	bool isFloating;
	float moveSpeed;		
	float timer1;
	int count;
	float gravity;
	bool isInitialized;

	float velocity;
	AABBCollider col;		//충돌을 관리할 변수
	AlarmObject* alarm;
	AnimationRenderer* animRenderer;		//애니메이션렌더러. 애니메이션을 구현할 때 필요

	SoundEvent* se;		//사운드이벤트

	int playerNumber; //1,2,3,4
	
	Player();					//Player생성자
	virtual void Update();		//Update: 매 프레임 호출됩니다.
	virtual void LateUpdate();	//LateUpdate: 매 프레임 Update, Render가 실행된 이후 호출됩니다.
};