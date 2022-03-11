// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 15486. 퇴사 2
// 

#include <bits/stdc++.h>
using namespace std;

int t[1500051];
int p[1500051];
int dp[1500051];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> t[i] >> p[i];

	for (int i = n; i > 0; i--)
	{
		if (t[i] + i > n + 1)
			dp[i] = dp[i + 1];
		else
			dp[i] = max(dp[i + 1], dp[t[i] + i] + p[i]);
	}

	cout << dp[1] << "\n";

	return 0;
}