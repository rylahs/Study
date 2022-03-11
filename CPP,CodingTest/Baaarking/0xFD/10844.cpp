// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 10844. 쉬운 계단 수
// 

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000000;

long long dp[103][11];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	

	int n;
	cin >> n;
	dp[1][0] = 0;
	for (int i = 1; i < 10; i++)
		dp[1][i] = 1;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0)
				dp[i][j] = dp[i - 1][j + 1] % MOD;
			else if (j == 9)
				dp[i][j] = dp[i - 1][j - 1] % MOD;
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
		}
	}
	long long ans = 0;
	for (int i = 0; i < 10; i++)
		ans += dp[n][i];
	cout << ans % MOD << "\n";
	return 0;
}