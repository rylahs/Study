// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.03
// 11650
// https://www.acmicpc.net/problem/11650

#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> v1, pair<int, int> v2)
{
	if (v1.first == v2.first)
		return v1.second < v2.second;

	return v1.first < v2.first;
	
}
vector<pair<int, int>> v(100005);
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> v[i].first >> v[i].second;

	sort(v.begin(), v.begin() + n, compare);

	for (int i = 0; i < n; i++)
		cout << v[i].first << " " << v[i].second << "\n";

	return 0;
}