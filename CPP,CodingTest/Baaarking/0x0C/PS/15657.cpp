// 0x0C. 백트래킹(Backtracking)
// Written by : Rylah
// Date : 2022.02.10
// 15657. N과 M(8)
// https://www.acmicpc.net/problem/15657
// https://www.acmicpc.net/source/38889556

#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool isused[10];
int input[10];

void func(int k)
{
	// base condition
	if (k == m)
	{
		for (int i = 0; i < m; i++)
			cout << input[arr[i]] << " ";
		cout << "\n";
		return;
	}
	int start = 0;
	if (k != 0)
		start = arr[k - 1];
	for (int i = start; i < n; i++)
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

	for (int i = 0; i < n; i++)
		cin >> input[i];

	sort(input, input + n);
	
	func(0);
	return 0;
}