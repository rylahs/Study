// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 11659. 구간 합 구하기 4
// https://www.acmicpc.net/problem/11659
// https://www.acmicpc.net/source/38983940

#include <bits/stdc++.h>
using namespace std;
int a[100003];
int sum[100003];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (i == 1)
			sum[i] = a[i];
		else
			sum[i] += sum[i - 1] + a[i];
	}

	while (m--)
	{
		int x, y;
		cin >> x >> y;

		cout << sum[y] - sum[x - 1] << "\n";

	}


	return 0;
}