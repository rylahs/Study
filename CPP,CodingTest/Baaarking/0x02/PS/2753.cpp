// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 2753. 윤년
// https://www.acmicpc.net/problem/2753
// https://www.acmicpc.net/source/38335737

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int year;
	cin >> year;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		cout << 1 << "\n";
	else
		cout << 0 << "\n";


	return 0;
}