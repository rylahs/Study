// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 10809
// https://www.acmicpc.net/problem/10809

#include <bits/stdc++.h>
using namespace std;


int alpha[26];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	fill(alpha, alpha + 26, -1);
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (alpha[str[i] - 'a'] == -1)
		{
			alpha[str[i] - 'a'] = i;
		}
	}
	
	for (int i = 0; i < 26; i++)
		cout << alpha[i] << " ";
	return 0;
}