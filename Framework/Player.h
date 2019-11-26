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

//Player�� ���Ƿ� ������ ��ü�Դϴ�.
//���� ���� ������Ʈ�� GameObject��ü�� ��ӹ޾� �����Ͽ����մϴ�.
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
	AABBCollider col;		//�浹�� ������ ����
	AlarmObject* alarm;
	AnimationRenderer* animRenderer;		//�ִϸ��̼Ƿ�����. �ִϸ��̼��� ������ �� �ʿ�

	SoundEvent* se;		//�����̺�Ʈ

	int playerNumber; //1,2,3,4
	
	Player();					//Player������
	virtual void Update();		//Update: �� ������ ȣ��˴ϴ�.
	virtual void LateUpdate();	//LateUpdate: �� ������ Update, Render�� ����� ���� ȣ��˴ϴ�.
};