// 0x0B. 재귀 (Recursive)
// Written by : Rylah
// Date : 2022.02.08
// 1629. 곱셈
// https://www.acmicpc.net/problem/1629
// https://www.acmicpc.net/source/38753262

#include <bits/stdc++.h>
using namespace std;

long long pow(long long a, long long b, long long m)
{
	if (b == 1)
		return a % m;
	long long val = pow(a, b / 2, m);
	val = val * val % m;
	if (b % 2 == 0)
		return val;
	return val * a % m;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long a, b, c;
	cin >> a >> b >> c;

	cout << pow(a, b, c) << "\n";
	return 0;
}