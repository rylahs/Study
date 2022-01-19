// BOJ 2439 º°Âï±â - 2
// https://www.acmicpc.net/problem/2439
// Written By Rylah
// Date : 2022.01.02
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - i; j++)
			cout << ' ';
		for (int j = n - i; j <= n; j++)
			cout << "*";
		cout << '\n';
	}
	return 0;
}
