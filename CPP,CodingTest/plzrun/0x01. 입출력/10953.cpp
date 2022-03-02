// plzrun 01. 입출력
// Written by : Rylah
// Date : 2022.03.01
// 10953.
// https://www.acmicpc.net/problem/10953.

#include <bits/stdc++.h>
using namespace std;

string board[11];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		int sum = (str[0] - '0') + (str[2] - '0');

		cout << sum << "\n";
	}

	return 0;
}