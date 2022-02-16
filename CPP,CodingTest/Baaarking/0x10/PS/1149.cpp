// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 1149. RGB거리
// https://www.acmicpc.net/problem/1149
// https://www.acmicpc.net/source/38982937

// 1번 집의 색은 2번 집의 색과 같지 않아야 한다.
// N번 집의 색은 N - 1번 집의 색과 같지 않아야 한다.
// i(2 ≤ i ≤ N - 1)번 집의 색은 i - 1번, i + 1번 집의 색과 같지 않아야 한다.


#include <bits/stdc++.h>
using namespace std;

int color[1002][3];
int dp[1002][3];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; // 2 ~ 1000
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> color[i][0] >> color[i][1] >> color[i][2];

	dp[1][0] = color[1][0];
	dp[1][1] = color[1][1];
	dp[1][2] = color[1][2];

	for (int i = 2; i <= n; i++)
	{
		dp[i][0] = color[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] = color[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] = color[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
	}

	// cout << min({ dp[n][0], dp[n][1], dp[n][2] }) << "\n";
	cout << *min_element(dp[n], dp[n] + 3) << "\n";
	

	return 0;
}