#include "StaticSurface.h"

StaticSurface::StaticSurface() : staticImage(NULL) 
{

}

StaticSurface::~StaticSurface() 
{
	delete staticImage;
	staticImage = NULL;
}

void StaticSurface::displayOn(Image *toDisplayOn)
{
	SDL_Rect offset;
	offset.x = staticImage->getX();
	offset.y = staticImage->getY();
	offset.h = staticImage->getHeight();
	offset.w = staticImage->getWidth();

	SDL_BlitSurface(staticImage->getSurface(), NULL, toDisplayOn->getSurface(), &offset);
}
