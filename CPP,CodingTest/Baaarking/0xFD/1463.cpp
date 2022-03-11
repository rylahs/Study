// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 1463. 1로 만들기
// 

#include <bits/stdc++.h>
using namespace std;

int dp[1000005];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	dp[1] = 0;

	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0)
			dp[i] = min(dp[i], dp[i / 2] + 1);
		if (i % 3 == 0)
			dp[i] = min(dp[i], dp[i / 3] + 1);
	}

	cout << dp[n] << "\n";
	return 0;
}