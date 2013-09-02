#pragma once
#include <list>
#include "Player.h"
#include "Track.h"

enum GAME_STATE {
	MENU=0,
	PLAYER_MENU=1,
	NETWORK_MENU=2,
	IN_GAME=3,
	SCORE_SCREEN=4
};

class Game {
private:
	list<Player*> players;
	Track track;
	GAME_STATE gameState;
	void setupPlayers();
	void setupNetwork();

public:
	Game();
	~Game();
	void handleMouseEvent(SDL_Event mouseEvent);
	void handleKeyboardEvent(SDL_Event keyEvent);
	void setupGame();
	void displayMenu();
	GAME_STATE getState();
};