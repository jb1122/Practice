#pragma once
#include "Actor/Actor.h"

class Barrier : public Actor
{
	RTTI_DECLARATIONS(Barrier, Actor)

public:
	Barrier(const Vector2& position);
};