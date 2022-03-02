// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.01
// 2193
// https://www.acmicpc.net/problem/2193


#include <bits/stdc++.h>
using namespace std;

long long dp[95];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	dp[1] = 1; // 1
	dp[2] = 1; // 10
	
	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cout << dp[n] << "\n";

	return 0;
}