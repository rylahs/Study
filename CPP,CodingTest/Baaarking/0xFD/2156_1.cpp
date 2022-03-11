// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.15
// 2156. 포도주 시식
// https://www.acmicpc.net/problem/2156


#include <bits/stdc++.h>
using namespace std;

int arr[10005];
int dp[10005];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	//             이번에 안먹기, 이전거 안먹기, 이이전거 안먹기
	// dp[n] = max({ dp[n - 1], dp[n - 2] + a[n], dp[n - 3] + a[n - 1] + a[n] });

	for (int i = 3; i <= n; i++)
		dp[i] = max({ dp[i - 1], dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i] });

	cout << dp[n] << "\n";


	return 0;
}
