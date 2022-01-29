#include <bits/stdc++.h>
using namespace std;
map<long long, int> m;
map<long long, int> idxm;
vector<pair<int, long long>> v;
bool compare(const pair<int, long long>& p1, const pair<int, long long>& p2)
{
	if (p1.first == p2.first)
		return idxm[p1.second] < idxm[p2.second];
	return p1.first > p2.first;

}
int main_2910(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;

	long long c;
	cin >> c;
	for (int i = 0; i < n; i++)
	{
		long long input;
		cin >> input;
		m[input]++;
		if (idxm[input] == 0)
			idxm[input] = i + 1;
	}

	for (auto& e : m)
		v.emplace_back(e.second, e.first);
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++)
		for (int j = 0; j < v[i].first; j++)
			cout << v[i].second << ' ';
	return 0;
}