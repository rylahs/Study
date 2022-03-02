// plzrun 01. 입출력
// Written by : Rylah
// Date : 2022.03.01
// 11022.
// https://www.acmicpc.net/problem/11022

#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int testCase;
	cin >> testCase;

	for (int t = 1; t <= testCase; t++)
	{
		int a, b;
		cin >> a >> b;

		cout << "Case #" << t << ": " << a << " + " << b << " = " << a + b << "\n";

	}



	return 0;
}