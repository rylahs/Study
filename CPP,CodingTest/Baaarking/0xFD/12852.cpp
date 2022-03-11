// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 12852. 1로 만들기 2
// 

#include <bits/stdc++.h>
using namespace std;

int dp[1000005];
int pre[1000005];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	dp[1] = 0;
	pre[1] = 0;
	dp[2] = dp[1] + 1;
	pre[2] = 1;

	int n;
	cin >> n;
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
	int temp = n;
	while (temp)
	{
		cout << temp << " ";
		temp = pre[temp];
	}

	return 0;
}