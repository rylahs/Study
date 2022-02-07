// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 2490. 윷놀이
// https://www.acmicpc.net/problem/2490
// https://www.acmicpc.net/source/38336078

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	char yut[5] = { 'D', 'C', 'B', 'A', 'E' };
	int n = 3;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < 4; j++)
		{
			int a;
			cin >> a;
			sum += a;
		}

		cout << yut[sum] << "\n";
	}

	return 0;
}