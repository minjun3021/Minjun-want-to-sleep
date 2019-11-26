#include "stdafx.h"
#include "StartFontObject.h"
#include "Util.h"

StartFontObject::StartFontObject() :
	GameObject(fontRenderer = new FontRenderer()), str(L"8 : 15")
{
	font = new Font(L"Arial",20.0f,255,255,255);						
	fontRenderer->font = this->font;		
	
	fontRenderer->text = str;						
	transform->SetPosition(250, 100);			
	transform->SetRotation(0.0f);				
	
	transform->SetScale(15.0f, 15.0f);				
}


StartFontObject::~StartFontObject()
{
	SAFE_DELETE(font);
}
