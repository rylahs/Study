// plzrun 01. 입출력
// Written by : Rylah
// Date : 2022.03.01
// 2522
// https://www.acmicpc.net/problem/2522

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
		for (int j = 0; j < n - i - 1; j++)
			cout << " ";
		for (int j = n - i - 1; j < n; j++)
			cout << "*";
		cout << "\n";
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = n - i; j > 0; j--)
			cout << "*";
		cout << "\n";
	}
	return 0;
}