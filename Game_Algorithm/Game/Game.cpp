#include "Game.h"
#include "Level/GameLevel.h"

Game* Game::instance = nullptr;

Game::Game()
{
	instance = this;
	gameLevel = new GameLevel();

	// 레벨 추가
	AddLevel(gameLevel);
}

Game::~Game()
{
}

//void Game::CleanUp()
//{
//	SafeDelete(gameLevel);
//	Engine::CleanUp();
//}

// 싱글톤
Game& Game::Get()
{
	return *instance;
}
