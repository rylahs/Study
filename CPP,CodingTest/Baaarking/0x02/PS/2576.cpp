// BOJ 2576. È¦¼ö
// https://www.acmicpc.net/problem/2576
// Written By Rylah
// Date : 2022.01.03
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int min = 101;
	int sum = 0;
	for (int i = 0; i < 7; i++)
	{
		int input;
		cin >> input;
		if (input % 2 == 1)
		{
			sum += input;
			if (input < min)
				min = input;
		}
	}
	if (sum == 0)
		cout << -1;
	else
		cout << sum << '\n' << min << '\n';

	return 0;
}
