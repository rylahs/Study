// plzrun 01. 입출력
// Written by : Rylah
// Date : 2022.03.01
// 8393.
// https://www.acmicpc.net/problem/8393

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	cout << n * (n + 1) / 2 << "\n";
	return 0;
}