#include "Geometry.h"

int main(void)
{
	Point pos1(1, 2), pos2(3, 1), pos3(-1, -4), pos4(5, 2);

	Geometry geo;
	geo.AddPoint(pos1);
	geo.AddPoint(pos2);
	geo.AddPoint(pos3);
	geo.AddPoint(pos4);

	geo.PrintDistance();
	geo.PrintNumMeets();

	return 0;
}