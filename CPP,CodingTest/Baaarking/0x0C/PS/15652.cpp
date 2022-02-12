// 0x0C. 백트래킹(Backtracking)
// Written by : Rylah
// Date : 2022.02.10
// 15652. N과 M(4)
// https://www.acmicpc.net/problem/15652
// https://www.acmicpc.net/source/38886769

#include <bits/stdc++.h>
using namespace std;

int arr[10];
bool isused[10];

int n, m;

void func(int k)
{
	if (k == m) // base condition
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}
	int start = 1;
	if (k != 0)
		start = arr[k - 1];
	for (int i = start; i <= n; i++)
	{
		arr[k] = i;
		isused[i] = true;
		func(k + 1);
		isused[i] = false;
	}
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	func(0);
	return 0;
}