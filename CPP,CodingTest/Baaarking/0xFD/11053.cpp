// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 11053. 가장 긴 증가하는 부분 수열
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
	}

	fill(dp, dp + n + 1, 1);
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (arr[j] < arr[i])
				dp[i] = (max(dp[i], dp[j] + 1));
		}
	}
	for (int i = 0; i <= n; i++)
		cout << dp[i] << "\n";
	cout << *max_element(dp + 1, dp + n + 1) << "\n";
	return 0;
}