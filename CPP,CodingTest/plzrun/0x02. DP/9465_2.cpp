// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.01
// 9465
// https://www.acmicpc.net/problem/9465


#include <bits/stdc++.h>
using namespace std;

const int MAX = 100005;

int sticker[2][MAX];
int dp[2][MAX];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int n;
		cin >> n;

		for (int i = 0; i < 2; i++)
			for (int j = 1; j <= n; j++)
				cin >> sticker[i][j];

		for (int i = 0; i < 2; i++)
			fill(dp[i], dp[i] + MAX, 0);

		dp[0][1] = sticker[0][1];
		dp[1][1] = sticker[1][1];

		for (int i = 2; i <= n; i++)
		{
			dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + sticker[0][i];
			dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + sticker[1][i];
		}

		cout << max(dp[0][n], dp[1][n]) << "\n";

	}


	return 0;
}