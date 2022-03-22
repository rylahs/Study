#pragma once
#include "Point.h"
#include <algorithm>

class Geometry
{
private:
	// 점 100개 배열
	Point* point_array[100];
	int num_points;
public:
	Geometry()
	{
		num_points = 0;
		//std::fill(point_array, point_array + 100, new Point());
	}
	void AddPoint(const Point& point)
	{
		point_array[num_points++] = new Point(point.GetX(), point.GetY());
	}
	// 모든 점들의 거리를 출력하는 함수
	void PrintDistance();

	// 모든 점들을 잇는 직선들 간의 교점의 수를 출력하는 함수
	// 참고적으로 임의의 두 점을 잇는 직선의 방정식을 f(x,y) = ax+by+c = 0
	// 이라고 할 때 임의의 다른 두 점 (x1, y1) 과 (x2, y2) 가 f(x,y)=0 을 기준으로
	// 서로 다른 부분에 있을 조건은 f(x1, y1) * f(x2, y2) <= 0 이면 됩니다.
	int InsertLineToPoint(const Point* point1, const Point* point2, const Point* insert);
	void PrintNumMeets();

};