// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 12852. 1로 만들기 2
// https://www.acmicpc.net/problem/12852
// https://www.acmicpc.net/source/38984545

#include <bits/stdc++.h>
using namespace std;

int dp[1000003];
int pre[1000003];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	dp[1] = 0;
	pre[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + 1;
		pre[i] = i - 1;
		if (i % 2 == 0 && dp[i] > dp[i / 2] + 1)
		{
			dp[i] = dp[i / 2] + 1;
			pre[i] = i / 2;
		}
		if (i % 3 == 0 && dp[i] > dp[i / 3] + 1)
		{
			dp[i] = dp[i / 3] + 1;
			pre[i] = i / 3;
			
		}
	}

	cout << dp[n] << "\n";
	int tmp = n;
	while (true)
	{
		cout << tmp << " ";
		if (pre[tmp] == 0)
			break;
		tmp = pre[tmp];
	}
	return 0;
}