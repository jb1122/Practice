#pragma once
#include "Actor/Actor.h"

class GoalPoint : public Actor
{
	RTTI_DECLARATIONS(GoalPoint, Actor)

public:
	GoalPoint(const Vector2& position);
};