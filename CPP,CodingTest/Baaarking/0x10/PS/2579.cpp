// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 2579. 계단 오르기
// https://www.acmicpc.net/problem/2579
// https://www.acmicpc.net/source/38981379

// 1. 계단은 한 번에 한 계단씩 또는 두 계단씩 오를 수 있다.즉, 한 계단을 밟으면서 이어서 다음 계단이나, 다음 다음 계단으로 오를 수 있다.
// 2. 연속된 세 개의 계단을 모두 밟아서는 안 된다.단, 시작점은 계단에 포함되지 않는다.
// 3. 마지막 도착 계단은 반드시 밟아야 한다.

#include <bits/stdc++.h>
using namespace std;

int dp[303][3];
int stairs[303];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> stairs[i];

	if (n == 1)
	{
		cout << stairs[1] << "\n";
		return 0;
	}

	dp[1][1] = stairs[1];
	dp[1][2] = 0;
	dp[2][1] = stairs[2];
	dp[2][2] = stairs[1] + stairs[2];

	for (int i = 3; i <= n; i++)
	{
		dp[i][1] = max(dp[i - 2][1], dp[i - 2][2]) + stairs[i];
		dp[i][2] = dp[i - 1][1] + stairs[i];
	}

	cout << max(dp[n][1], dp[n][2]) << "\n";





	return 0;
}