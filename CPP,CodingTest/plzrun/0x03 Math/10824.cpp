// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 10824
// https://www.acmicpc.net/problem/10824

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string a, b, c, d;
	cin >> a >> b >> c >> d;

	a = a + b;
	c = c + d;
	long long sum = stoll(a)+stoll(c);
	cout << sum << "\n";
	return 0;
}