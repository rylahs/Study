// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 9461. 파도반 수열
// 

#include <bits/stdc++.h>
using namespace std;

long long dp[102];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	
	for (int i = 4; i <= 100; i++)
		dp[i] = dp[i - 2] + dp[i - 3];

	while (testCase--)
	{
		int n;
		cin >> n;
		cout << dp[n] << "\n";
	}

	return 0;
}