// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.01
// 11057
// https://www.acmicpc.net/problem/11057
// https://www.acmicpc.net/source/39797261

#include <bits/stdc++.h>
using namespace std;

int dp[1005][10];
const int MOD = 10007;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 0; i < 10; i++)
		dp[1][i] = 1;


	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
			}
		}
	}
	
	int sum = 0;
	for (int i = 0; i < 10; i++)
		sum = (sum + dp[n][i]) % MOD;

	cout << sum << "\n";
	return 0;
}