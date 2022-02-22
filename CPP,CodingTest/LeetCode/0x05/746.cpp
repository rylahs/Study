#include <bits/stdc++.h>
using namespace std;

int st[1003];
int dp[1003];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> st[i];

	dp[0] = 0;
	dp[1] = 0;

	for (int i = 2; i <= n; i++)
	{
		dp[i] = min(dp[i - 2] + st[i - 2], dp[i - 1] + st[i - 1]);
	}

	cout << dp[n] << "\n";



	return 0;
}