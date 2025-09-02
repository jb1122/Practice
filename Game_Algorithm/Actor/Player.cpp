#include <iostream>
#include "Player.h"
#include "Input.h"
#include "Game/Game.h"
#include "Level/GameLevel.h"

Player::Player(const Vector2& position)
	: Actor("P", Color::Cyan, position)
{
	SetSortingOrder(5);
}

Player::~Player()
{
}

void Player::Tick(float deltaTime)
{
	super::Tick(deltaTime);

	// 플레이어 이동.
	if (Input::Get().GetKeyDown(VK_LEFT))
	{
		Vector2 position = Position();
		Vector2 lastPosition = Position();
		position.x -= 2;
		SetPosition(position);
		//Reprint(lastPosition);
	}
	if (Input::Get().GetKeyDown(VK_RIGHT))
	{
		Vector2 position = Position();
		Vector2 lastPosition = Position();
		position.x += 2;
		SetPosition(position);
		//Reprint(lastPosition);

	}
	if (Input::Get().GetKeyDown(VK_UP))
	{
		Vector2 position = Position();
		Vector2 lastPosition = Position();
		position.y -= 1;
		SetPosition(position);
		//Reprint(lastPosition);
	}
	if (Input::Get().GetKeyDown(VK_DOWN))
	{
		Vector2 position = Position();
		Vector2 lastPosition = Position();
		position.y += 1;
		SetPosition(position);
		//Reprint(lastPosition);
	}

	// 플레이어 포인트 설정.
	if (Input::Get().GetKeyDown('S') || Input::Get().GetKeyDown('s'))
	{
		GameLevel* gameLevel = owner->As<GameLevel>();
		gameLevel->SetStart(position);
	}
	if (Input::Get().GetKeyDown('G') || Input::Get().GetKeyDown('g'))
	{
		GameLevel* gameLevel = owner->As<GameLevel>();
		gameLevel->SetGoal(position);
	}
	if (Input::Get().GetKeyDown('W') || Input::Get().GetKeyDown('w'))
	{
		GameLevel* gameLevel = owner->As<GameLevel>();
		gameLevel->SetBarrier(position);
	}

	// 플레이어 알고리즘 실행.
	if (Input::Get().GetKeyDown(VK_SPACE))
	{
		GameLevel* gameLevel = owner->As<GameLevel>();
		gameLevel->StartAstar();
	}

	// ESC누르면 게임 종료
	if (Input::Get().GetKeyDown(VK_ESCAPE))
	{
		Game::Get().Quit();
	}

}

//void Player::Reprint(Vector2 lastPosition)
//{
//	static HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	int white = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
//
//	GameLevel* gameLevel = owner->As<GameLevel>();
//
//	switch (gameLevel->GetGridOne(lastPosition.x / 2, lastPosition.y))
//	{
//	case 0:
//		SetConsoleTextAttribute(handle, white);
//		std::cout << ". ";
//		break;
//	case 1:
//		SetConsoleTextAttribute(handle, white);
//		std::cout << "# ";
//		break;
//	case 2:
//		SetConsoleTextAttribute(handle, FOREGROUND_RED);
//		std::cout << "S ";
//		break;
//	case 3:
//		SetConsoleTextAttribute(handle, FOREGROUND_RED);
//		std::cout << "G ";
//		break;
//	case 5:
//		SetConsoleTextAttribute(handle, FOREGROUND_GREEN);
//		std::cout << "+ ";
//		break;
//	}
//
//
//}
