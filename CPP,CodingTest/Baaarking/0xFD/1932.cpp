// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.03.01
// 1932. 정수 삼각형
// https://www.acmicpc.net/problem/1932
// https://www.acmicpc.net/source/39781538

#include <bits/stdc++.h>
using namespace std;

int tri[502][502];
int dp[502][502];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)			
			cin >> tri[i][j];
	}

	dp[1][1] = tri[1][1];

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + tri[i][j];
		}
	}

	int maxSum = *max_element(dp[n], dp[n] + n + 1);

	cout << maxSum << "\n";

	return 0;
}