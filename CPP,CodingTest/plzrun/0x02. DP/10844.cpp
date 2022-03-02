// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.01
// 10844
// https://www.acmicpc.net/problem/10844

#include <bits/stdc++.h>
using namespace std;

long long dp[105][10];
const int MOD = 1000000000;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i < 10; i++)
		dp[1][i] = 1;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0)
				dp[i][j] = dp[i - 1][j + 1];

			else if (j == 9)
				dp[i][j] = dp[i - 1][j - 1];

			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
		}
	}
	
	long long sum = 0;
	
	for (int i = 0; i < 10; i++)
		sum = (sum + dp[n][i]) % MOD;

	cout << sum << "\n";

	return 0;
}