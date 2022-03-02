// plzrun 02. DP
// Written by : Rylah
// Date : 2022.03.02
// 1912
// https://www.acmicpc.net/problem/1912


#include <bits/stdc++.h>
using namespace std;

int arr[100005];
int dp[100005];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	dp[0] = arr[0];

	for (int i = 1; i < n; i++)
	{
		dp[i] = max(arr[i], dp[i - 1] + arr[i]);
	}

	cout << *max_element(dp, dp + n) << "\n";

	return 0;
}