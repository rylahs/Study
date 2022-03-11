// 0xFD. Practice
// Written by : Rylah
// Date : 2022.03.11
// 1629. 곱셈
// https://www.acmicpc.net/problem/1629

#include <bits/stdc++.h>
using namespace std;

long long mult(int a, int b, int m)
{
	if (b == 1)
		return a % m;
	long long tmp = mult(a, b / 2, m);
	tmp = tmp * tmp % m;

	if (b % 2 == 0)
		return tmp % m;
	return tmp * a % m;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b, c;
	cin >> a >> b >> c;

	cout << mult(a, b, c) << "\n";
	return 0;
}