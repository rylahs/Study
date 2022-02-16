// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 9095. 1,2,3 더하기
// https://www.acmicpc.net/problem/9095
// https://www.acmicpc.net/source/38980216

#include <bits/stdc++.h>
using namespace std;

int dp[13];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	dp[1] = 1; // 1
	dp[2] = 2; // 1 + 1, 2
	dp[3] = 4; // 1 + 1 + 1, 1 + 2, 2 + 1, 3
	for (int i = 4; i <= 11; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
	while (testCase--)
	{
		int n;
		cin >> n;
		
		cout << dp[n] << "\n";
	}
	return 0;
}