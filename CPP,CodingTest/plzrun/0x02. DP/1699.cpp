// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.02
// 1699
// https://www.acmicpc.net/problem/1699


#include <bits/stdc++.h>
using namespace std;

int dp[100005];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		dp[i] = i;
		for (int j = 1; j * j <= i; j++)
			dp[i] = min(dp[i], dp[i - j * j] + 1);
	}
	cout << dp[n] << "\n";


	return 0;
}