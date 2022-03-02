// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.02
// 2133
// https://www.acmicpc.net/problem/2133


#include <bits/stdc++.h>
using namespace std;

int dp[32];
// d[n] = 3d[n - 2] + 2d[n - 4]..............;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	dp[0] = 1;
	dp[1] = 0;
	dp[2] = 3;


	for (int i = 4; i <= n; i = i + 2)
	{
		dp[i] = dp[i - 2] * dp[2];
		for (int j = i - 4; j >= 0; j = j - 2)
			dp[i] = dp[i] + dp[j] * 2;
	}
	cout << dp[n] << "\n";
	return 0;
}