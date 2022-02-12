// 0x0C. 백트래킹(Backtracking)
// Written by : Rylah
// Date : 2022.02.10
// 15656. N과 M(7)
// https://www.acmicpc.net/problem/15656
// https://www.acmicpc.net/source/38889279

#include <bits/stdc++.h>
using namespace std;

int arr[9];
bool isused[9];
int input[9];

int n, m;

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

	for (int i = 0; i < n; i++)
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