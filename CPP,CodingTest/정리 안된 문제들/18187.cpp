#include <bits/stdc++.h>
using namespace std;
int dp[105];
int main_18187(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	dp[1] = 2;
	dp[2] = 4;
	int tmp = 3;
	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i - 1] + tmp;
		if (i % 3 != 0)
			tmp++;
	}
	cout << dp[n];
	return 0;
}