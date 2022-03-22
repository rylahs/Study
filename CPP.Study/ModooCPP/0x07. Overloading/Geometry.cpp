#include "Geometry.h"
#include <cmath>
void Geometry::PrintDistance()
{
	for (int i = 0; i < num_points - 1; i++)
	{
		for (int j = i + 1; j < num_points; j++)
		{
			std::cout << "Point[" << i << "] �� Point[" << j << "] ������ �Ÿ��� ";
			
			double x = pow((point_array[i]->GetX() - point_array[j]->GetX()), 2);
			double y = pow((point_array[i]->GetY() - point_array[j]->GetY()), 2);
			double dist = sqrt(x + y);

			std::cout << dist << "�Դϴ�." << std::endl;
		}
	}
}

int Geometry::InsertLineToPoint(const Point* point1, const Point* point2, const Point* insert) {
	return (point1->GetX() - point2->GetX()) * (insert->GetX() - point1->GetX()) - (point1->GetY() - point2->GetY()) * (insert->GetY() - point1->GetY());
}

void Geometry::PrintNumMeets() {
	int cnt = 0;

	if (num_points <= 3) {
		std::cout << "���� �����Ͽ� ������ �����ϴ�." << std::endl;
		return;
	}


	for (int i = 0; i < num_points - 3; i++) {
		for (int j = i + 1; j < num_points - 2; j++) {
			for (int k = j + 1; k < num_points - 1; k++) {
				for (int l = k + 1; l < num_points; l++) {
					if (InsertLineToPoint(point_array[i], point_array[j], point_array[k]) * InsertLineToPoint(point_array[i], point_array[j], point_array[l]) <= 0)
						cnt++;
				}
			}
		}
	}

	std::cout << "������ �� " << cnt << "�� �Դϴ�." << std::endl;
}
