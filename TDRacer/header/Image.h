#pragma once
#include "SDL.h"
#include <string>

using namespace std;

class Image {
private:
	SDL_Texture *image;
	SDL_Rect* clipRect; //which part of the image to use
	SDL_Rect* positionRect; //where the image should be displayed

public:
	Image();
	~Image();
	void loadImage(SDL_Renderer* renderer, const string filePath);

	SDL_Rect* getClipRect()
	{
		return clipRect;
	}

	SDL_Rect* getPositionRect()
	{
		return positionRect;
	}

	SDL_Texture* getTexture() 
	{
		return image;
	}
};