// 0x15. 해시
// Written by : Rylah
// Date : 2022.02.28
// 7785. 회사에 있는 사람
// https://www.acmicpc.net/problem/7785

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	unordered_set<string> s;
	while (n--)
	{
		string name, state;
		cin >> name >> state;

		if (state == "enter")
			s.insert(name);
		else
			s.erase(name);
	}

	
	vector<string> v(s.begin(), s.end());
	sort(v.begin(), v.end(), greater<>());

	for (auto& e : v)
		cout << e << "\n";

	return 0;
}