// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.03
// 10989
// https://www.acmicpc.net/problem/10989

#include <bits/stdc++.h>
using namespace std;

int arr[10005];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int idx;
	for (int i = 0; i < n; i++)
	{
		cin >> idx;
		arr[idx]++;
	}

	for (int i = 0; i < 10001; i++)
	{
		while (arr[i] != 0)
		{
			cout << i << "\n";
			arr[i]--;
		}
	}

	return 0;
}