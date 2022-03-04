// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.03
// 10808
// https://www.acmicpc.net/problem/10808

#include <bits/stdc++.h>
using namespace std;

int alpha[26];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		alpha[str[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
		cout << alpha[i] << " ";
	return 0;
}