// 0x11. 그리디
// Written by : Rylah
// Date : 2022.02.13
// 11047. 동전 0
// https://www.acmicpc.net/problem/11047
// https://www.acmicpc.net/source/38987773

#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, k;
	cin >> n >> k;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	int cnt = 0;
	int idx = n - 1;
	while (k)
	{
		if (k / v[idx] == 0)
		{
			idx--;
			continue;
		}

		else
		{
			cnt += k / v[idx];
			k %= v[idx];
		}
	}

	cout << cnt << "\n";

	return 0;
}