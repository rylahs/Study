// 0x03. 배열
// Written by : Rylah
// Date : 2022.01.31
// 1919. 애너그램 만들기
// https://www.acmicpc.net/problem/1919
// https://www.acmicpc.net/source/38383485

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int alpha[26] = { 0, };

	string str1, str2;
	cin >> str1 >> str2;

	for (int i = 0; i < (int)str1.size(); i++)
		alpha[str1[i] - 'a']++;
	for (int i = 0; i < (int)str2.size(); i++)
		alpha[str2[i] - 'a']--;
	int cnt = 0;
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] != 0)
			cnt += abs(alpha[i]);
	}

	cout << cnt << "\n";
	return 0;
}