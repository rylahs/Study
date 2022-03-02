// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.01
// 11726
// https://www.acmicpc.net/problem/11726

#include <bits/stdc++.h>
using namespace std;

int dp[1003];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++)
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;

	cout << dp[n] << "\n";
	return 0;
}