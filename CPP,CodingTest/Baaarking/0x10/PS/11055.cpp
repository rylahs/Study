// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 11055. 가장 큰 증가 부분 수열
// https://www.acmicpc.net/problem/11055
// https://www.acmicpc.net/source/38986552

#include <bits/stdc++.h>
using namespace std;

int arr[1003];
int dp[1003];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		dp[i] = arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i])
				dp[i] = max(dp[i], dp[j] + arr[i]);
		}
	}

	cout << *max_element(dp, dp + n) << "\n";
	return 0;
}
