﻿// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 2444. 별 찍기 - 7
// https://www.acmicpc.net/problem/2444
// https://www.acmicpc.net/source/38339300

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
			cout << " ";
		for (int j = 0; j < 2 * i + 1; j++)
			cout << "*";
		cout << "\n";
	}
	for (int i = 1; i < n ; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 2 * (n - i - 1) + 1; j > 0; j--)
			cout << "*";
		cout << "\n";
	}

	return 0;
}