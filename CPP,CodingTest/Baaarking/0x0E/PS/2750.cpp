// 0x0E. 정렬 I
// Written by : Rylah
// Date : 2022.02.12
// 2750. 수 정렬하기
// https://www.acmicpc.net/problem/2750
// https://www.acmicpc.net/source/38954687

#include <bits/stdc++.h>
using namespace std;

int arr[1002];
int n;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << "\n";


	return 0;
}