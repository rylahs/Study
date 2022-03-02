// plzrun 01. 입출력
// Written by : Rylah
// Date : 2022.03.01
// 10991
// https://www.acmicpc.net/problem/10991

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
		for (int j = 0; j < i; j++)
			cout << "* ";
		cout << "*";
		cout << "\n";

	}


	return 0;
}