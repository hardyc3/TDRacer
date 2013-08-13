#pragma once 
#include "Image.h"
#include <string>
#include "SDL.h"

class Animatable {
private:
	Image *animatableImage;
	int frameRate;

public:
	Animatable();
	~Animatable();
	void animateOn(SDL_Renderer* renderer);
	void loadImage(SDL_Renderer* renderer, string imageFile);

	Image* getAnimatableImage()
	{
		return animatableImage;
	}

	int getFrameRate()
	{
		return frameRate;
	}
};