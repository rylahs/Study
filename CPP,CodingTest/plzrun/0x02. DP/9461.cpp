// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.02
// 9461
// https://www.acmicpc.net/problem/9461


#include <bits/stdc++.h>
using namespace std;

long long dp[102];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	dp[1] = 1;
	dp[2] = 1;
	
	for (int i = 3; i <= 100; i++)
		dp[i] = dp[i - 2] + dp[i - 3];
	while (testCase--)
	{
		int n;
		cin >> n;
		cout << dp[n] << "\n";
	}

	return 0;
}