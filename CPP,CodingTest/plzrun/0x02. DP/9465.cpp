// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.01
// 9465
// https://www.acmicpc.net/problem/9465


#include <bits/stdc++.h>
using namespace std;

int sticker[3][100005];
int dp[3][100005];
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
		for (int i = 1; i <= 2; i++)
			for (int j = 1; j <= n; j++)
				cin >> sticker[i][j];
		
		for (int i = 1; i <= 2; i++)
			fill(dp[i], dp[i] + n + 1, 0);

		dp[1][1] = sticker[1][1];
		dp[2][1] = sticker[2][1];

		for (int i = 2; i <= n; i++)
		{
			dp[1][i] = max(dp[2][i - 1], dp[2][i - 2]) + sticker[1][i];
			dp[2][i] = max(dp[1][i - 1], dp[1][i - 2]) + sticker[2][i];
		}

		int maxVal = max(dp[1][n], dp[2][n]);

		cout << maxVal << "\n";



	}
	return 0;
}