#pragma once
#include "Scene.h"

#include "MainBackObject.h"
class Player;

//����� ������ ��ü�� �ʿ��մϴ�.
//Scene�� ��ӹ޾� ��ü�� �����մϴ�.
class GameScene :
	public Scene
{
public:
	virtual void Initialize();		//��� Scene���� �ݵ�� Initialize�Լ��� �־���մϴ�. (�߻� Ŭ���� ����)
public:
	Player* player;
};
