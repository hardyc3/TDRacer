#pragma once
#include "Image.h"

class StaticSurface {
private:
	Image *staticImage;
	
public:
	StaticSurface();
	~StaticSurface();
	void displayOn(Image *toDisplayOn);

	SDL_Surface* getSurface() 
	{
		return staticImage->getSurface();
	}
};