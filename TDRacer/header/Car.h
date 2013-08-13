#pragma once
#include "Animatable.h"

class Car {
private: 
	Animatable carImage;
	int speed;
	float acceleration;
	float turningRadius;
	float turningSpeed;

public:

	Animatable getCarImage()
	{
		return carImage;
	}

};