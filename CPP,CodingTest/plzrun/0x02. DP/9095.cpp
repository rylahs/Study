// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.01
// 9095
// https://www.acmicpc.net/problem/9095

#include <bits/stdc++.h>
using namespace std;

int dp[13];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	dp[1] = 1; // 1
	dp[2] = 2; // 1 + 1,  2
	dp[3] = 4; // 1 + 1 + 1, 2 + 1, 1 + 2, 3
	for (int i = 4; i <= 12; i++)
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	while (testCase--)
	{
		int k;
		cin >> k;

		cout << dp[k] << "\n";
	}


	return 0;
}