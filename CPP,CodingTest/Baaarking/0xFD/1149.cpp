// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 1149. RGB 거리
// 

#include <bits/stdc++.h>
using namespace std;
int rgb[1002][3];
int dp[1002][3];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		for (int j = 0; j < 3; j++)
			cin >> rgb[i][j];

	dp[1][0] = rgb[1][0];
	dp[1][1] = rgb[1][1];
	dp[1][2] = rgb[1][2];

	for (int i = 2; i <= n; i++)
	{
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + rgb[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + rgb[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + rgb[i][2];
	}
	
	cout << min({ dp[n][0],dp[n][1],dp[n][2] });

	return 0;
}