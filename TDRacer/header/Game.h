#pragma once
#include <list>
#include "Player.h"
#include "Track.h"

class Game {
private:
	list<Player*> players;
	Track track;
	bool playersSetup;
	bool networkSetup;
	bool gameReady;
	void setupPlayers();
	void setupNetwork();

public:
	Game();
	~Game();
	void handleMouseEvent(SDL_Event mouseEvent);
	void handleKeyboardEvent(SDL_Event keyEvent);
	void setupGame();
	void displayMenu();
	bool isSetup();
};