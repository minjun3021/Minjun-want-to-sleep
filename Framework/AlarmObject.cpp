#include "stdafx.h"
#include "AlarmObject.h"
#include "Util.h"

AlarmObject::AlarmObject() : GameObject(L"alarm.png")
, col2(*transform, 24.0f)
{
}

void AlarmObject::Update()
{
}
