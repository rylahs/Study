// Goorm Level 1. Count Char
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43089/%ED%8A%B9%EC%A0%95-%EB%AC%B8%EC%9E%90-%EA%B0%9C%EC%88%98-%EA%B5%AC%ED%95%98%EA%B8%B0/quiz/1

#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	getline(cin, str);

	char ch;
	cin >> ch;

	int cnt = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ch)
			++cnt;
	}

	cout << cnt << "\n";
	return 0;
}