// BOJ 2480. 주사위 세개
// https://www.acmicpc.net/problem/2480

// Written By Rylah
// Date : 2022.01.03
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	int getMoney = 0;
	if (a == b && b == c)
		getMoney = 10000 + a * 1000;
	else if (a == b || b == c)
		getMoney = 1000 + b * 100;
	else if (a == c)
		getMoney = 1000 + a * 100;
	else
		getMoney = max({ a,b,c }) * 100;
	cout << getMoney;

	return 0;
}
