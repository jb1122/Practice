#pragma once
#include "Actor/Actor.h"

class FinalPath : public Actor
{
	RTTI_DECLARATIONS(FinalPath, Actor)

public:
	FinalPath(const Vector2& position);
};