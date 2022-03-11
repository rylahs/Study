// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.27
// 2302. 극장 좌석
// https://www.acmicpc.net/problem/2302

#include <bits/stdc++.h>
using namespace std;

int dp[45];
vector<int> seat = { 0 };
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int m;
	cin >> m;
	
	for (int i = 0; i < m; i++)
	{
		int a;
		cin >> a;
		seat.emplace_back(a);
	}
	
	seat.emplace_back(n + 1);
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++) 
		dp[i] = dp[i - 1] + dp[i - 2];

	int ans = 1;
	for (int i = 1; i < seat.size(); i++) 
		ans *= dp[seat[i] - seat[i - 1] - 1];

	
	cout << ans;


	return 0;
}