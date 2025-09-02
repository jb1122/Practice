#include "StartingPoint.h"

StartingPoint::StartingPoint(const Vector2& position)
	: Actor("S ", Color::Red, position)
{
	// 그릴 때 사용할 정렬 순서 결정.
	SetSortingOrder(4);
}