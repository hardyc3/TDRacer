#include "TDRacerMain.h"
#include <boost\chrono\chrono.hpp>

using namespace boost::chrono;

int main(int argc, char* args[]) 
{
	microseconds(25);
	//Start SDL 
	SDL_Init( SDL_INIT_EVERYTHING ); 
	
	SDL_Window* screen = NULL;
	//Set up screen 
	screen = SDL_CreateWindow(SCREEN_TITLE, SCREEN_X, SCREEN_Y, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_SWSURFACE );

	SDL_Event sdlEvent;
	bool quit = false;
	while(quit == false)
	{
		while(SDL_PollEvent(&sdlEvent))
		{
			if(sdlEvent.type == SDL_QUIT)
			{
				quit = true;
			}
		}
	}

	//Quit SDL 
	SDL_Quit();  
	
	return 0; 
}