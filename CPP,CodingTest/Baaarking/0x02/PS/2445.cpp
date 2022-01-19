// BOJ 2444 º°Âï±â - 8
// https://www.acmicpc.net/problem/2445
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
		// 1 8 1 , 2 6 2, 3 4 3, 4 2 4, 5 0 5
		for (int j = 0; j <= i; j++)
			cout << "*";
		for (int j = 2 * (n - i - 1); j > 0; j--)
			cout << ' ';
		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << "\n";
	}
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			cout << "*";
		for (int j = 0; j < 2 * (n - i); j++)
			cout << ' ';
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}
