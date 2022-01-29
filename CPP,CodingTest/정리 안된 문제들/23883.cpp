#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	vector<int> v, sortv;
	pair<int, int> swap;
	map<int, int> valueMap, indexMap;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.emplace_back(a);
		sortv.emplace_back(a);
	}
	sort(sortv.begin(), sortv.end());
	for (int i = 0; i < sortv.size(); i++)
	{
		valueMap[i] = sortv[i];
		indexMap[v[i]] = i;
	}
	int count = 0;
	for (int i = valueMap.size() - 1; i >= 0; i--)
	{
		if (
	}


	
		cout << -1 << '\n';
	return 0;
}