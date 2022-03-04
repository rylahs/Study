// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.03
// 2751
// https://www.acmicpc.net/problem/2751

#include <bits/stdc++.h>
using namespace std;

int arr[1000005];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << "\n";

	return 0;
}