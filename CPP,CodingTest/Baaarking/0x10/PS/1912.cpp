// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 1912. 연속합
// https://www.acmicpc.net/problem/1912
// https://www.acmicpc.net/source/38985970

#include <bits/stdc++.h>
using namespace std;

int arr[100002];
int sum[100002];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	sum[1] = arr[1];

	for (int i = 2; i <= n; i++)
		sum[i] = max(sum[i - 1], 0) + arr[i];

	for (int i = 1; i <= n; i++)
	{
		cout << sum[i] << "\n";
	}

	cout << *max_element(sum + 1, sum + n + 1) << "\n";

	return 0;
}