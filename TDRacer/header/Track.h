#pragma once
#include "StaticSurface.h"
#include <string>

enum TRACKS {
	BASIC_TRACK = 0
};

const string Tracks[]={
	"sprites/track1.png"
};

class Track : public StaticSurface {
private:

public: 
	Track();
	~Track();

};