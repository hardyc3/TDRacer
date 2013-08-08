#include "TDRacerMain.h"

int main(int argc, char* args[]) 
{
	//Start SDL 
	if(SDL_Init( SDL_INIT_EVERYTHING ) == -1)
	{
		return 1; //there was an sdl error
	}
	
	SDL_Window* screen = NULL;
	//Set up screen 
	screen = SDL_CreateWindow(SCREEN_TITLE, SCREEN_X, SCREEN_Y, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_SWSURFACE );
	if(screen == NULL)
	{
		return 1; //couldn't create window
	}
		
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

		SDL_Surface* windowSurface = SDL_GetWindowSurface(screen);

		
				
		SDL_UpdateWindowSurface(screen);
	}

	SDL_DestroyWindow(screen);

	//Quit SDL 
	SDL_Quit();  
	
	return 0; 
}