#pragma once
#include <iostream>
class Point
{
	int x, y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int pos_x, int pos_y)
	{
		this->x = pos_x;
		this->y = pos_y;
	}

	int GetX() const { return x; }
	int GetY() const { return y; }
};