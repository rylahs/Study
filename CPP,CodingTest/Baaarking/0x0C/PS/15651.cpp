// 0x0C. 백트래킹(Backtracking)
// Written by : Rylah
// Date : 2022.02.10
// 15651. N과 M(3)
// https://www.acmicpc.net/problem/15651
// https://www.acmicpc.net/source/38886439

#include <bits/stdc++.h>
using namespace std;

int arr[9];
int n, m;

void func(int k)
{
	if (k == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++) // All things Visited not used
	{
		arr[k] = i;
		func(k + 1);

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