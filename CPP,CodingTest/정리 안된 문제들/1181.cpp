// BOJ 1181. 단어 정렬
// https://www.acmicpc.net/problem/1181

#include <bits/stdc++.h>
using namespace std;
struct compare {
	bool operator()(const string& a, const string& b) const {
		if (a.size() == b.size())
			return a < b;
		return a.size() < b.size();
	}
};
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	set<string,compare> s;
	while (n--)
	{
		string str;
		cin >> str;
		s.insert(str);
	}

	for (auto& e : s)
		cout << e << '\n';
	return 0;
}