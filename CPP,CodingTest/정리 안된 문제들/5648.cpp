#include <bits/stdc++.h>
using namespace std;

int main_5648(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<long long> v;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		reverse(str.begin(), str.end());
		v.emplace_back(stoll(str));
	}
	stable_sort(v.begin(), v.end());
	for (auto e : v)
		cout << e << '\n';

	return 0;
}