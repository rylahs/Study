// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.02
// 11722
// https://www.acmicpc.net/problem/11722


#include <bits/stdc++.h>
using namespace std;

int arr[1005];
int dp[1005];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	fill(dp, dp + n, 1);

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}

	cout << *max_element(dp, dp + n) << "\n";
	return 0;
}