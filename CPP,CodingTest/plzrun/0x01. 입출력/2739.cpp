// plzrun 01. 입출력
// Written by : Rylah
// Date : 2022.03.01
// 2739.
// https://www.acmicpc.net/problem/2739

#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i < 10; i++)
		cout << n << " * " << i << " = " << n * i << "\n";

	return 0;
}