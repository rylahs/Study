// 0x0C. 백트래킹(Backtracking)
// Written by : Rylah
// Date : 2022.02.11
// 15666. N과 M(12)
// https://www.acmicpc.net/problem/15666
// https://www.acmicpc.net/source/38893861

#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
int input[10];

void func(int k, int start)
{
	// base condition
	if (k == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	int temp = 0;
	for (int i = start; i < n; i++)
	{
		if (temp != input[i])
		{
			arr[k] = input[i];
			temp = arr[k];
			func(k + 1, i);
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> input[i];

	sort(input, input + n);

	func(0, 0);

	return 0;
}