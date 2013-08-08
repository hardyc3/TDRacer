#include "Image.h"
#include <SDL_image.h>

Image::Image() : image(NULL), clipRect(NULL), positionRect(NULL)
{
	clipRect = new SDL_Rect();
	clipRect->h = 0;
	clipRect->w = 0;
	clipRect->x = 0;
	clipRect->y = 0;

	positionRect = new SDL_Rect();
	positionRect->h = 0;
	positionRect->w = 0;
	positionRect->x = 0;
	positionRect->y = 0;
}

Image::~Image()
{
	delete clipRect;
	delete positionRect;
	SDL_DestroyTexture(image);
}

void Image::loadImage(SDL_Renderer* renderer, const string filePath)
{
	SDL_Surface* loadedImage = NULL;

	loadedImage = IMG_Load(filePath.c_str());

	if(loadedImage != NULL)
	{
		image = SDL_CreateTextureFromSurface(renderer, loadedImage);
		SDL_FreeSurface(loadedImage);
	}
}