#include "Game.h"
#include "SDL.h"

Game::Game() : players(), track(), gameState(MENU)
{
}

Game::~Game()
{
}

void Game::setupPlayers()
{
}

void Game::setupNetwork()
{
}

void Game::handleKeyboardEvent(SDL_Event keyEvent)
{
}

void Game::handleMouseEvent(SDL_Event mouseEvent)
{
}

void Game::setupGame()
{
}

void Game::displayMenu()
{
	
}

GAME_STATE Game::getState()
{
	return gameState;
}
