#include "stdafx.h"
#include "BackGroundObject.h"

BackGroundObject::BackGroundObject() : GameObject(L"startBackground.png")
{
	transform->SetScale(4.0f, 4.0f);
}
void BackGroundObject::Update() {

}