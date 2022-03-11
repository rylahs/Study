// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.03.01
// 1932. 정수 삼각형
// https://www.acmicpc.net/problem/1932
// https://www.acmicpc.net/source/39781601

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
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cin >> tri[i][j];
	}

	dp[0][0] = tri[0][0];

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + tri[i][j];
		}
	}

	int maxSum = *max_element(dp[n - 1], dp[n - 1] + n);

	cout << maxSum << "\n";

	return 0;
}