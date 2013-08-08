#pragma once
#include "Image.h"

class StaticSurface {
private:
	Image *staticImage;
	
public:
	StaticSurface();
	~StaticSurface();
	void displayOn(SDL_Renderer* renderer);

	SDL_Texture* getTexture() 
	{
		return staticImage->getTexture();
	}
};