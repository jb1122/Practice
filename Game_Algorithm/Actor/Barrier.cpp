#include "Barrier.h"

Barrier::Barrier(const Vector2& position)
	: Actor("W ", Color::Yellow, position)
{
	// 그릴 때 사용할 정렬 순서 결정.
	SetSortingOrder(2);
}
