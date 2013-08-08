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

void Animator::displayOn(SDL_Surface* toDisplayOn) 
{
	list<Animatable*>::iterator animatableIter = animatableList.begin();
	list<Animatable*>::iterator animatableIterEnd = animatableList.end();

	if(animatableIter != animatableIterEnd)
	{
		//Animatable* item = animatableIter._Ptr;
		//while(animatableIter != animatableList.end())
		{
		//	animatableIter.
		}
	}
}