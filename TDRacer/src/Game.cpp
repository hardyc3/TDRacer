#include "Game.h"
#include "SDL.h"

Game::Game() : players(), track(), playersSetup(false), networkSetup(false), gameReady(false)
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

bool Game::isSetup()
{
	return playersSetup && networkSetup && gameReady;
}