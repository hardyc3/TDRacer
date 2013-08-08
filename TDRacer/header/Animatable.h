#pragma once 
#include "Image.h"

class Animatable {
private:
	Image *animatableImage;
	int frameRate;

public:
	Animatable();
	~Animatable();
	void animateOn(Image *toAnimateOn);

	Image* getAnimatableImage()
	{
		return animatableImage;
	}

	int getFrameRate()
	{
		return frameRate;
	}
};