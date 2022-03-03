// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.03
// 11052
// https://www.acmicpc.net/problem/11052

#include <bits/stdc++.h>
using namespace std;

int card[1002];
int dp[1002];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> card[i];
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			dp[i] = max(dp[i], dp[i - j] + card[j]);

	}


	cout << dp[n] << "\n";
	

	
	return 0;
}