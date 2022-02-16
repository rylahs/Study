// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 14501. 퇴사
// https://www.acmicpc.net/problem/14501
// https://www.acmicpc.net/source/38987128

#include <bits/stdc++.h>
using namespace std;

int t[25];
int p[25];
int dp[25];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> t[i] >> p[i];

	for (int i = n; i >= 1; i--)
	{
		if (t[i] + i > n + 1)
			dp[i] = dp[i + 1];
		else
			dp[i] = max(dp[i + 1], dp[t[i] + i] + p[i]);
	}

	cout << dp[1] << "\n";

	return 0;
}
