// plzrun 01. 입출력
// Written by : Rylah
// Date : 2022.03.01
// 10950.
// https://www.acmicpc.net/problem/10950

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;

	while (n--)
	{
		int a, b;
		cin >> a >> b;

		cout << a + b << "\n";
	}
	return 0;
}