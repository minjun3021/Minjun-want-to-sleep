#pragma once
#include "GameObject.h"
#include "FontRenderer.h"
class StartFontObject :
	public GameObject
{
public:
	StartFontObject();
	~StartFontObject();

	Font* font;						
	FontRenderer* fontRenderer;		
	wchar_t str[100];
};

