#include "TDRacerMain.h"
#include "Animator.h"
#include "Game.h"

int main(int argc, char* args[]) 
{
	//Start SDL 
	if(SDL_Init( SDL_INIT_EVERYTHING ) == -1)
	{
		return 1; //there was an sdl error
	}
	
	Animator animator;
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	//Set up screen 
	window = SDL_CreateWindow(SCREEN_TITLE, SCREEN_X, SCREEN_Y, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_SWSURFACE );
	if(window == NULL)
	{
		return 1; //couldn't create window
	}

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if(renderer == NULL)
	{
		return 1;
	}
	
	Game game;

	SDL_Event sdlEvent;
	bool quit = false;
	while(quit == false)
	{
		if(!game.isSetup())
		{
			game.displayMenu();
		}

		while(SDL_PollEvent(&sdlEvent))
		{
			if(sdlEvent.type == SDL_QUIT)
			{
				quit = true;
			}
			else if(sdlEvent.type == SDL_KEYDOWN ||
				sdlEvent.type == SDL_KEYUP)
			{
				game.handleKeyboardEvent(sdlEvent);
			}
		}

		SDL_RenderClear(renderer);
		animator.renderTo(renderer);
		SDL_RenderPresent(renderer);
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

	//Quit SDL 
	SDL_Quit();  
	
	return 0; 
}