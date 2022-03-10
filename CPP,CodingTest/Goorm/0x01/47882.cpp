// Goorm Level 1. unknown l
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/47882/%ED%97%B7%EA%B0%88%EB%A6%AC%EB%8A%94-%EC%9E%91%EB%8C%80%EA%B8%B0/quiz/1

#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string str;
	getline(cin, str);
	int cnt[4] = {};
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '1')
			++cnt[0];
		else if (str[i] == 'I')
			++cnt[1];
		else if (str[i] == 'l')
			++cnt[2];
		else if (str[i] == '|')
			++cnt[3];
	}

	for (int i = 0; i < 4; i++)
		cout << cnt[i] << "\n";


	return 0;
}