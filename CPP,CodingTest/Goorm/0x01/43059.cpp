// Goorm Level 1. Surf Sensor
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43059/%ED%8C%8C%EB%8F%84-%EC%84%BC%EC%84%9C/quiz/1

#include <bits/stdc++.h>
using namespace std;


struct sensor {
	int x;
	int y;
};

struct center {
	sensor s;
	int r;
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	center c;
	cin >> c.s.x >> c.s.y >> c.r;

	sensor sens[5];
	for (int i = 0; i < 5; i++)
		cin >> sens[i].x >> sens[i].y;

	double minDis = 1001;
	int minIdx = 5000;
	double rad = c.r;
	for (int i = 0; i < 5; i++)
	{
		double dist = sqrt(pow(sens[i].x - c.s.x, 2) + pow(sens[i].y - c.s.y, 2));
		if (dist <= rad && minDis > dist)
		{
			minDis = min(minDis, dist);
			minIdx = i + 1;
		}
	}
	if (minIdx == 5000)
		cout << -1 << "\n";
	else
		cout << minIdx << "\n";


	return 0;
}