// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 1932. 정수 삼각형
// https://www.acmicpc.net/problem/1932
// https://www.acmicpc.net/source/38985244

int tri[502][502];
int sum[502][502];
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++)
			cin >> tri[i][j];
	
	sum[1][1] = tri[1][1];

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			sum[i][j] = max(sum[i - 1][j - 1], sum[i - 1][j]) + tri[i][j];
		}
	}
	int maxSum = *max_element(sum[n], sum[n] + n + 1);
	cout << maxSum << "\n";
	return 0;
}