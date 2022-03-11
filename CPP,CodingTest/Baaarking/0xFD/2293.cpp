// 0x11. 그리디 
// Written by : Rylah
// Date : 2022.02.24
// 2293. 동전 1
// https://www.acmicpc.net/problem/2293

#include <bits/stdc++.h>
using namespace std;

int coin[105];
int dp[10005];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		cin >> coin[i];

	dp[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = coin[i]; j <= k; j++)
		{
			dp[j] = dp[j] + dp[j - coin[i]];
		}
	}
	cout << dp[k] << "\n";
	
	return 0;
}