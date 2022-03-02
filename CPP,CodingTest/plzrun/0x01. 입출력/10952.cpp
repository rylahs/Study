// plzrun 01. 입출력
// Written by : Rylah
// Date : 2022.03.01
// 10952.
// https://www.acmicpc.net/problem/10952

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b;
	while (1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		cout << a + b << "\n";
	}
	return 0;
}