// 0x0C. 백트래킹(Backtracking)
// Written by : Rylah
// Date : 2022.02.11
// 15663. N과 M(9)
// https://www.acmicpc.net/problem/15663
// https://www.acmicpc.net/source/38890450

#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool isused[10];
int input[10];

void func(int k)
{
	if (k == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		if (!isused[i] && tmp != input[i])
		{
			isused[i] = true;
			arr[k] = input[i];
			tmp = input[i];
			func(k + 1);
			isused[i] = false;
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

	func(0);
	return 0;
}