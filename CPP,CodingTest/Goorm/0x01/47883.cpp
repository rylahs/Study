// Goorm Level 1. Word Cnt
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/47883/%EB%8B%A8%EC%96%B4%EC%9D%98-%EA%B0%9C%EC%88%98-%EC%84%B8%EA%B8%B0/quiz/1

#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	getline(cin, str);
	int i = 0;
	int cnt = 0;
	while (1)
	{
		if (str[i] == 0)
			break;
		else if ((str[i] != 32) && ((str[i + 1] == 32) || (str[i + 1] == 0)))
			cnt++;
		i++;
	}

	cout << cnt << "\n";
	return 0;
}