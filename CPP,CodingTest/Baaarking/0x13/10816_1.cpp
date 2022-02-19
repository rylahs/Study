// 0x13. 이분 탐색
// Written by : Rylah
// Date : 2022.02.14
// 10816. 숫자 카드 2
// https://www.acmicpc.net/problem/10816
// https://www.acmicpc.net/source/39047233

#include <bits/stdc++.h>
using namespace std;

int arr[500005];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	int m;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int target;
		cin >> target;

		cout << upper_bound(arr, arr + n, target) - lower_bound(arr, arr + n, target) << " ";
	}


	return 0;
}