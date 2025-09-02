#pragma once

#include "Engine.h"

class Level;
class Game : public Engine
{
public:
	Game();
	~Game();

	static Game& Get();

private:
	Level* gameLevel = nullptr;
	static Game* instance;

};