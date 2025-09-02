#pragma once
#include "Actor/Actor.h"

class Player : public Actor
{
	RTTI_DECLARATIONS(Player, Actor)
public:
	Player(const Vector2& position);
	~Player();

	virtual void Tick(float deltaTime) override;

	// 지나간 자리 복구하는 함수.
	//void Reprint(Vector2 lastPosition);

private:

};