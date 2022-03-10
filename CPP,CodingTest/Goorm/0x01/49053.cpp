// Goorm Level 1. snake
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/49053/%EC%95%B5%EB%AC%B4%EC%83%88-%EA%BC%AC%EA%BC%AC/quiz/1

#include <bits/stdc++.h>
using namespace std;

bool isGather(char c)
{
	if (c == 'A' || c == 'a' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
		return true;
	else
		return false;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	cin.ignore();
	for (int t = 0; t < n; t++)
	{
		string str;
		getline(cin, str);
		string ans;
		for (int i = 0; i < str.length(); i++)
		{
			if (isGather(str[i]))
				ans += str[i];
		}

		if (ans.empty())
			cout << "???" << "\n";
		else
			cout << ans << "\n";
	}
	return 0;
}