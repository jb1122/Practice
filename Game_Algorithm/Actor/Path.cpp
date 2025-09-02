#include "Path.h"

Path::Path(const Vector2& position)
	: Actor("+ ", Color::Green, position)
{
	// 그릴 때 사용할 정렬 순서 결정.
	SetSortingOrder(2);
}