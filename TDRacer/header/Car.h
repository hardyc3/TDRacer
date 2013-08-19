#pragma once
#include "Animatable.h"

class Car : public Animatable {
private: 
	int speed;
	float acceleration;
	float turningRadius;
	float turningSpeed;

public:
	Car();
	~Car();
};