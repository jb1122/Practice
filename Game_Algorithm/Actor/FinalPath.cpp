#include "FinalPath.h"

FinalPath::FinalPath(const Vector2& position)
	: Actor("+ ", Color::Red, position)
{
	// 그릴 때 사용할 정렬 순서 결정.
	SetSortingOrder(3);
}