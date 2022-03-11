// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 2193. 이친수
// 

#include <bits/stdc++.h>
using namespace std;

long long dp[92];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	dp[1] = 1;
	for (int i = 2; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 2];

	cout << dp[n] << "\n";
	// 1 : 1
	// 2 : 10
	// 3 : 101 100
	// 4 : 1000 1001 1010
	// 5 : 10000 10001 10010 10101 10100
	// 6 : 100000 100001 100010 100100 100101 101000 101001 101010

	return 0;
}