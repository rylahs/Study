// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 11055. 가장 큰 증가 부분 수열
// 

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

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		dp[i] = arr[i];
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (arr[j] < arr[i])
			{
				dp[i] = max(dp[i], dp[j] + arr[i]);
			}
		}
	}
	
	cout << *max_element(dp + 1, dp + n + 1) << "\n";

	return 0;
}