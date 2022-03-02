// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.02
// 2156
// https://www.acmicpc.net/problem/2156


#include <bits/stdc++.h>
using namespace std;

int glass[10005];
int dp[10005];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> glass[i];

	dp[1] = glass[1];
	dp[2] = glass[1] + glass[2];

	for (int i = 3; i <= n; i++)
	{
		dp[i] = max({dp[i - 1], dp[i - 2] + glass[i], dp[i - 3] + glass[i - 1] + glass[i]});
	}

	cout << dp[n] << "\n";



	return 0;
}