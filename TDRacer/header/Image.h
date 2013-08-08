#pragma once
#include "SDL.h"
#include <string>

using namespace std;

class Image {
private:
	SDL_Surface *image;
	int width;
	int height;
	int x; 
	int y;

public:
	Image();
	~Image();
	void loadImage(string filePath);

	int getX()
	{
		return x;
	}

	int getY()
	{
		return y;
	}

	int getHeight()
	{
		return height;
	}

	int getWidth() 
	{
		return width;
	}

	SDL_Surface* getSurface() 
	{
		return image;
	}
};