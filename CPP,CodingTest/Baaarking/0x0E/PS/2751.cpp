// 0x0E. 정렬 I
// Written by : Rylah
// Date : 2022.02.12
// 2751. 수 정렬하기 2
// https://www.acmicpc.net/problem/2751
// https://www.acmicpc.net/source/38954874

#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1000002];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n, less<>());

	for (int i = 0; i < n; i++)
		cout << arr[i] << "\n";
	return 0;
}