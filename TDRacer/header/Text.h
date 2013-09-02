#pragma once
#include <string>
#include "SDL.h"
#include "SDL_ttf.h"

using namespace std;

class Text {
private:
	string text;
	SDL_Color color;
	int fontSize;
	
public:
	Text();
	~Text();

	string getText()
	{
		return text;
	}

	SDL_Color getColor() 
	{
		return color;
	}

	int getFontSize() 
	{
		return fontSize;
	}
};


TTF_Font* font = NULL;
	
void renderText(Text text, SDL_Renderer* renderer, SDL_Rect* position)
{
	if(font == NULL)
	{
		font = TTF_OpenFont("fonts/SourceSansPro-Regular.ttf", text.getFontSize());
	}

	if(font == NULL)
	{
		throw runtime_error("Failed to load font");
	}

	SDL_Surface* textSurface = TTF_RenderText_Blended(font, text.getText().c_str(), text.getColor());
	SDL_Texture* textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);

	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, textTexture, NULL, position);
	SDL_RenderPresent(renderer);

	SDL_FreeSurface(textSurface);	
	delete textTexture;
	textTexture = NULL;
}