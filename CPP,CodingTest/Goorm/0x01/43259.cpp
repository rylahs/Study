// Goorm Level 1. Space Removed
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43259/%EA%B3%B5%EB%B0%B1-%EC%97%86%EC%95%A0%EA%B8%B0/quiz/1


#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string str;
	getline(cin, str);

	string ans;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			continue;
		else
			ans += str[i];
	}
	cout << ans << "\n";

	return 0;
}