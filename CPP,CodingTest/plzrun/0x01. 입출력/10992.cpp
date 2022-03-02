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

	
	for (int i = 0; i < n - 1; i++)
		cout << " ";
	cout << "*\n";

	for (int i = 2; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
			cout << " ";
		cout << "*";

		for (int j = 0; j < 2 * (i - 1) - 1; j++)
		{
			cout << " ";
		}
		cout << "* \n";
	}

	if (n != 1)
	{
		for (int i = 0; i < 2 * n - 1; i++)
			cout << "*";
	}
	return 0;
}