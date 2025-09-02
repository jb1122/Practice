#include "GoalPoint.h"

GoalPoint::GoalPoint(const Vector2& position)
	: Actor("G ", Color::Red, position)
{
	// 그릴 때 사용할 정렬 순서 결정.
	SetSortingOrder(4);
}