// 0x03. 배열
// Written by : Rylah
// Date : 2022.01.31
// 10807. 개수 세기
// https://www.acmicpc.net/problem/10807
// https://www.acmicpc.net/source/38382339

#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int arr[202] = { 0, };
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		arr[a + 100]++;
	}
	int target;
	cin >> target;

	cout << arr[target + 100] << "\n";

	return 0;
}