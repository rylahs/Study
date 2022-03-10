// Goorm Level 1. Leap Year
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43204/%EC%9C%A4%EB%85%84-leap-year/quiz/1


#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int year;
	cin >> year;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		cout << "Leap Year\n";
	else
		cout << "Not Leap Year\n";
	return 0;
}