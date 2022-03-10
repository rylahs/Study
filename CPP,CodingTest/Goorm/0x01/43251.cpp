// Goorm Level 1. Triangle Area
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43251/%EC%82%BC%EA%B0%81%ED%98%95%EC%9D%98-%EB%84%93%EC%9D%B4/quiz/1


#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int width, height;
	cin >> width >> height;

	double area = double(0.5 * width * height);
	cout << fixed;
	cout.precision(1);
	cout << area << "\n";

	return 0;
}