// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.03
// 11004
// https://www.acmicpc.net/problem/11004

#include <bits/stdc++.h>
using namespace std;

int arr[5000005];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n, less<>());

	cout << arr[k - 1];
	return 0;
}