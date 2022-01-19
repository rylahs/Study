// BOJ 2440 º°Âï±â - 3
// https://www.acmicpc.net/problem/2440
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
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << '\n';
	}
	return 0;
}
