#pragma once 
#include "Image.h"

class Animatable {
private:
	Image *animatableImage;
	int frameRate;

public:
	Animatable();
	~Animatable();
	void animateOn(const SDL_Renderer* renderer);

	Image* getAnimatableImage()
	{
		return animatableImage;
	}

	int getFrameRate()
	{
		return frameRate;
	}
};