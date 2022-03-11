// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 2579. 계단 오르기
// 

#include <bits/stdc++.h>
using namespace std;

int stairs[302];
int dp[302][2];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> stairs[i];
	
	dp[1][0] = stairs[1];
	dp[1][1] = 0;
	dp[2][0] = stairs[2];
	dp[2][1] = dp[1][0] + stairs[2];

	for (int i = 3; i <= n; i++)
	{
		dp[i][0] = max(dp[i - 2][0], dp[i - 2][1]) + stairs[i];
		dp[i][1] = dp[i - 1][0] + stairs[i];
	}

	cout << max(dp[n][0], dp[n][1]) << "\n";



	return 0;
}