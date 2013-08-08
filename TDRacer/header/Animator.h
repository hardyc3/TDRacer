#pragma once
#include <list>
#include "Animatable.h"

class Animator {
private:
	list<Animatable*> animatableList;

public:
	Animator();
	~Animator();
	void renderTo(SDL_Renderer *toRenderOn);
	void addToRenderList(Animatable* toAddToList);
	void removeFromList(Animatable* toRemove);

};