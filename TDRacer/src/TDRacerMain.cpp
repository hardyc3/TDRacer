#include "SDL.h"

int main(int argc, char* args[]) 
{
	//Start SDL 
	SDL_Init( SDL_INIT_EVERYTHING ); 
	
	SDL_Window* screen = NULL;
	//Set up screen 
	screen = SDL_CreateWindow("TDRacer", 100, 100, 640, 480, SDL_SWSURFACE );

	//Pause 
	SDL_Delay( 2000 );

	//Quit SDL 
	SDL_Quit();  
	
	return 0; 
}