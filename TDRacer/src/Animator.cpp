#include "Animator.h"
#include <iterator>

Animator::Animator() 
{

}

Animator::~Animator()
{
	Animatable* front = animatableList.front();
	Animatable* curr = animatableList.back();
	while(curr != front)
	{
		delete curr;
		curr = NULL;
		animatableList.pop_back();
		curr = animatableList.back();
	}

	delete front;
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