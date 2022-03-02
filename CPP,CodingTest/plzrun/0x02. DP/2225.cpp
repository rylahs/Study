// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.02
// 2225
// https://www.acmicpc.net/problem/2225

#include <bits/stdc++.h>
using namespace std;

long long dp[202][202];
const int MOD = 1000000000;
int main(void)
{
    
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	for (int i = 0; i <= n; i++)
		dp[1][i] = 1;

	for (int i = 2; i <= k; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			for (int l = 0; l <= j; l++)
			{
				dp[i][j] = dp[i][j] + dp[i - 1][l];
			}
			dp[i][j] = dp[i][j] % MOD;
		}
	}


	cout << dp[k][n] << "\n";

	return 0;
}