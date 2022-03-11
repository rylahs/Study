// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 11659. 구간 합 구하기 4
// 

#include <bits/stdc++.h>
using namespace std;

int num[100005];
int dp[100005];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> num[i];

	for (int i = 1; i <= n; i++)
		dp[i] = dp[i - 1] + num[i];
	
	while (m--)
	{
		int x, y;
		cin >> x >> y;
		cout << dp[y] - dp[x - 1] << "\n";
	}

	
	return 0;
}