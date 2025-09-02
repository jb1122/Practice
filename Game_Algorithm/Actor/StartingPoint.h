#pragma once
#include "Actor/Actor.h"

class StartingPoint : public Actor
{
	RTTI_DECLARATIONS(StartingPoint, Actor)

public:
	StartingPoint(const Vector2& position);
};