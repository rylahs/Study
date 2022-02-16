// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 2193. 이친수
// https://www.acmicpc.net/problem/2193
// https://www.acmicpc.net/source/38985603

#include <bits/stdc++.h>
using namespace std;

long long dp[92];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	dp[1] = 1;
	dp[2] = 1;
	
	int n;
	cin >> n;
	for (int i = 3; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 2];

	cout << dp[n] << "\n";

	return 0;
}