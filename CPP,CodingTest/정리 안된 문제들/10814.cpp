#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, string> p1, pair<int, string> p2)
{
	return p1.first < p2.first;
}
int main_10814(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<pair<int, string>> v;
	int n;
	cin >> n;
	int inputInt;
	string inputStr;
	for (int i = 0; i < n; i++)
	{
		cin >> inputInt >> inputStr;
		v.emplace_back(pair<int, string>(inputInt, inputStr));
	}
	stable_sort(v.begin(), v.end(), compare);

	for (auto e : v)
		cout << e.first << " " << e.second << '\n';
	return 0;
}