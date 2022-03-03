// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.02
// 2011
// https://www.acmicpc.net/problem/2011

#include <bits/stdc++.h>
using namespace std;

int arr[5005];
int dp[5005];

const int MOD = 1000000;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	int n;
	n = str.length();

	for (int i = 1; i <= n; i++)
		arr[i] = str[i - 1] - '0';

	if (n == 1 && arr[n] == 0)
	{
		cout << 0 << "\n";
		return 0;
	}

	dp[0] = 1;

	for (int i = 1; i <= n; i++)
	{
		if (arr[i] >= 1 && arr[i] <= 9)
			dp[i] = (dp[i] + dp[i - 1]) % MOD;

		if (i == 1)
			continue;

		int temp = arr[i] + arr[i - 1] * 10;
		if (temp >= 10 && temp <= 26)
		{
			dp[i] = (dp[i] + dp[i - 2]) % MOD;
		}
	}

	cout << dp[n] << "\n";


	return 0;
}