#include "stdafx.h"
#include "StartPlayer.h"
#include "GameScene.h"


StartPlayer::StartPlayer()
{
	timer = 1.7f;
	se = new SoundEvent();		
	se->LoadFile(L"OhMyGod.wav");
	se->Play();
	
}

void StartPlayer::Update()
{
	
	timer -= TimeManager::GetDeltaTime();

	if (timer < 0) {
		se->Stop();
		Scene::ChangeScene(new GameScene());
	}
}

void StartPlayer::LateUpdate()
{
}


