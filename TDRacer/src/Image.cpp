#include "Image.h"
#include <SDL_image.h>

Image::Image() : image(NULL), width(0), height(0), x(0), y(0)
{
}

Image::~Image()
{
}

void Image::loadImage(string filePath)
{
	SDL_Surface* loadedImage = NULL;
	SDL_Surface* optimizedSurface = NULL;

	loadedImage = IMG_Load(filePath.c_str());

	if(loadedImage != NULL)
	{
		//optimizedSurface = SDL_display
	}
}