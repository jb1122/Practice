#pragma once

// 색상.
enum class Color : int
{
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Yellow = 6,
	White = Red | Green | Blue, // 그냥 숫자 7해도 됨.
	Intensity = 8
};