// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 10869. 사칙연산
// https://www.acmicpc.net/problem/10869
// https://www.acmicpc.net/source/38335530

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b;
	cin >> a >> b;
	cout << a + b << "\n";
	cout << a - b << "\n";
	cout << a * b << "\n";
	cout << a / b << "\n";
	cout << a % b << "\n";

	return 0;
}