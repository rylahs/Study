// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 1463. 1로 만들기
// https://www.acmicpc.net/problem/1463
// https://www.acmicpc.net/source/38979726

// X가 3으로 나누어 떨어지면, 3으로 나눈다.
// X가 2로 나누어 떨어지면, 2로 나눈다.
// 1을 뺀다.

#include <bits/stdc++.h>
using namespace std;

int dp[1000002];
int n;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
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