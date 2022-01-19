// BOJ 2442 º°Âï±â - 5
// https://www.acmicpc.net/problem/2442
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
		for (int j = n - i - 1; j > 0; j--)
			cout << ' ';
		for (int j = 0; j < 2 * i + 1; j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}
