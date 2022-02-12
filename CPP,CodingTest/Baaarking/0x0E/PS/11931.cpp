// 0x0E. 정렬 I
// Written by : Rylah
// Date : 2022.02.12
// 11931. 수 정렬하기 4
// https://www.acmicpc.net/problem/11931
// https://www.acmicpc.net/source/38955574

#include <bits/stdc++.h>
using namespace std;

int n;

int arr[2000001];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	sort(arr, arr + n, greater<>());

	for (int i = 0; i < n; i++)
		cout << arr[i] << "\n";

	return 0;
}