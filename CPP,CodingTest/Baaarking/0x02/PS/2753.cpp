// BOJ 2753. À±³â
// https://www.acmicpc.net/problem/2753
// Written By Rylah
// Date : 2022.01.03

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int input;
	cin >> input;
	if (input % 4 == 0 && input % 100 != 0 || input % 400 == 0)
		cout << 1;
	else
		cout << 0;
	return 0;
}
