#pragma once
#include "StaticSurface.h"
#include <string>

enum TRACKS {
	BASIC_TRACK
};

const string Tracks[]={
	"sprites/track1.png"
};

class Track {
private:
	StaticSurface* track;

public: 
	Track();
	~Track();
	void loadTrack(TRACKS pickedTrack);

	StaticSurface getTrack()
	{
		return track;
	}
};