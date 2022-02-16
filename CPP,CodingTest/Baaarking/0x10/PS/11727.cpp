// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 11727. 2xn 타일링 2
// https://www.acmicpc.net/problem/11727
// https://www.acmicpc.net/source/38985426


#include <bits/stdc++.h>
using namespace std;
int dp[1003];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	          
	dp[1] = 1;
	dp[2] = 3;

	for (int i = 3; i <= n; i++)
		dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;
	cout << dp[n] << "\n";

	return 0;
}