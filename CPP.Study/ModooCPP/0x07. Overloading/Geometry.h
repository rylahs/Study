#pragma once
#include "Point.h"
#include <algorithm>

class Geometry
{
private:
	// �� 100�� �迭
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
	// ��� ������ �Ÿ��� ����ϴ� �Լ�
	void PrintDistance();

	// ��� ������ �մ� ������ ���� ������ ���� ����ϴ� �Լ�
	// ���������� ������ �� ���� �մ� ������ �������� f(x,y) = ax+by+c = 0
	// �̶�� �� �� ������ �ٸ� �� �� (x1, y1) �� (x2, y2) �� f(x,y)=0 �� ��������
	// ���� �ٸ� �κп� ���� ������ f(x1, y1) * f(x2, y2) <= 0 �̸� �˴ϴ�.
	int InsertLineToPoint(const Point* point1, const Point* point2, const Point* insert);
	void PrintNumMeets();

};