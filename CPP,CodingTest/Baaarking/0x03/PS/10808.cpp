// 0x03. 배열
// Written by : Rylah
// Date : 2022.01.30
// 10808. 알파벳 개수
// https://www.acmicpc.net/problem/10808
// https://www.acmicpc.net/source/38360131

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;
	int alpha[26] = {0, };
	for (int i = 0; i < str.size(); i++)
	{
		alpha[str[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
		cout << alpha[i] << " ";
	return 0;
}