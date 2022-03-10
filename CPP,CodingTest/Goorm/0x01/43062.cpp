// Goorm Level 1. Memo Sorting
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43062/%EB%82%A0%EC%A7%9C%EC%88%9C%EC%9C%BC%EB%A1%9C-%EB%A9%94%EB%AA%A8%EB%A5%BC-%EC%A0%95%EB%A0%AC%ED%95%98%EB%9D%BC/quiz/1

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<string> v;
	while (!cin.eof())
	{
		string str;
		getline(cin, str);
		if (str == "END")
			break;
		v.emplace_back(str);
	}

	for (auto& e : v)
		cout << e << "\n";
	return 0;
}