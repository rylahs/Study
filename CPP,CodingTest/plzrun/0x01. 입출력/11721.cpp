// plzrun 01. 입출력
// Written by : Rylah
// Date : 2022.03.01
// 11721.
// https://www.acmicpc.net/problem/11721

#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (i != 0 && i % 10 == 0)
			cout << "\n";
		cout << str[i];
	}

	return 0;
}