// 0x0C. 백트래킹(Backtracking)
// Written by : Rylah
// Date : 2022.02.10
// 15650. N과 M(2)
// https://www.acmicpc.net/problem/15650
// https://www.acmicpc.net/source/38886116

#include <bits/stdc++.h>
using namespace std;

int n, m; // N , M
int arr[10]; // Range 1 ~ 8
bool isused[10]; // Range 1 ~ 8

void func(int k)
{
	// base condition
	if (k == m) // Escape
	{
		for (int i = 0; i < m; i++) // Print
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}
	int start = 1; // Start 
	if (k != 0) // if 0 Array Error
		start = arr[k - 1] + 1; // Prev Array Value + 1
	for (int i = start; i <= n; i++)
	{
		arr[k] = i; // input
		isused[i] = true; // visited
		func(k + 1); // next
		isused[i] = false; // visited canceled
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