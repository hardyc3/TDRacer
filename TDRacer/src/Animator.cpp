#include "Animator.h"
#include <iterator>

Animator::Animator() 
{

}

Animator::~Animator()
{
	list<Animatable*>::iterator animatableIter = animatableList.begin();
	list<Animatable*>::iterator animatableIterEnd = animatableList.end();
	while(animatableIter != animatableIterEnd)
	{
		delete *animatableIter;
		*animatableIter = NULL;
		animatableIter++;
	}
}

void Animator::renderTo(SDL_Renderer *toRenderOn)
{
	list<Animatable*>::iterator animatableIter = animatableList.begin();
	list<Animatable*>::iterator animatableIterEnd = animatableList.end();

	while(animatableIter != animatableIterEnd)
	{
		(*animatableIter)->animateOn(toRenderOn);
		
		animatableIter++;
	}
}

void Animator::addToRenderList(Animatable* toAddToList)
{
	animatableList.push_back(toAddToList);
}

void Animator::removeFromList(Animatable* toRemove)
{
	animatableList.remove(toRemove);
}

