// BOJ 1008
// A / B
// https://www.acmicpc.net/problem/1008

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	double a, b;
	cin >> a >> b;

	cout.precision(12);
	cout << fixed;
	cout << a / b;

	return 0;
}