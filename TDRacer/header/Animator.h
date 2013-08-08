#pragma once
#include <list>
#include "Animatable.h"

class Animator {
private:
	list<Animatable*> animatableList;

public:
	Animator();
	~Animator();
	void displayOn(SDL_Surface *toDisplayOn);
};