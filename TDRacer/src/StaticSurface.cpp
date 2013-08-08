#include "StaticSurface.h"

StaticSurface::StaticSurface() : staticImage(NULL) 
{

}

StaticSurface::~StaticSurface() 
{
	delete staticImage;
	staticImage = NULL;
}

void StaticSurface::displayOn(SDL_Renderer* renderer)
{
	SDL_Rect* clipping = staticImage->getClipRect();
	SDL_Rect* position = staticImage->getPositionRect();

	SDL_RenderCopy(renderer, staticImage->getTexture(), clipping, position);
}
