#include "Animatable.h"

Animatable::Animatable() : animatableImage(NULL), frameRate(24)
{
}
	
Animatable::~Animatable()
{
	delete animatableImage;
}

void Animatable::animateOn(SDL_Renderer *toAnimateOn)
{
	SDL_Rect* clipping = animatableImage->getClipRect();
	SDL_Rect* position = animatableImage->getPositionRect();

	SDL_RenderCopy(toAnimateOn, animatableImage->getTexture(), clipping, position);
}

void Animatable::loadImage(SDL_Renderer* renderer, string imageFile)
{
	animatableImage = new Image();
	animatableImage->loadImage(renderer, imageFile);
}