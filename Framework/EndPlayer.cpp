#include "stdafx.h"
#include "EndPlayer.h"


EndPlayer::EndPlayer()
{
}

void EndPlayer::Update()
{
	if (InputManager::GetKeyDown(VK_SPACE)) {
		Scene::ChangeScene(new GameScene());
	}
	if (InputManager::GetKeyDown(VK_RETURN)) {
		quick_exit(0);
	}
}

void EndPlayer::LateUpdate()
{
}


