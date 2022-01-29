#include <bits/stdc++.h>
using namespace std;

int main_11656(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;
	vector<string> v;
	for (int i = 0; i < (int)s.size(); i++)
		v.emplace_back(s.substr(i));
	sort(v.begin(), v.end());
	for (auto& e : v)
		cout << e << '\n';


	return 0;
}