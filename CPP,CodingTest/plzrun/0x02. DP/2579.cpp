// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.02
// 2579
// https://www.acmicpc.net/problem/2579


#include <bits/stdc++.h>
using namespace std;

int arr[303];
int dp[303][3];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	dp[1][1] = arr[1];
	dp[1][2] = 0;
	dp[2][1] = arr[2];
	dp[2][2] = dp[1][1] + arr[2];


	for (int i = 3; i <= n; i++)
	{
		dp[i][1] = max(dp[i - 2][1], dp[i - 2][2]) + arr[i];
		dp[i][2] = dp[i - 1][1] + arr[i];
	}

	cout << max(dp[n][1], dp[n][2]) << "\n";

	return 0;
}