#include <bits/stdc++.h>
using namespace std;
struct compare {
	bool operator()(const string& a, const string& b) const {
		if (a.size() == b.size())
			return a < b;
		return a.size() < b.size();
	}
};
int main_1181(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	set<string, compare> v;
	while (n--)
	{
		string s;
		cin >> s;
		v.insert(s);
	}
	
	for (auto e : v)
		cout << e << '\n';
	
	return 0;
}