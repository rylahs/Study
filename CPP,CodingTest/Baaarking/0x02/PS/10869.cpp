// BOJ 10869 사칙연산
// https://www.acmicpc.net/problem/10869
// Written By Rylah
// Date : 2022.01.03
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	cout << a + b << '\n';
	cout << a - b << '\n';
	cout << a * b << '\n';
	cout << a / b << '\n';
	cout << a % b << '\n';
	return 0;
}
