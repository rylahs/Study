// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.03
// 10814
// https://www.acmicpc.net/problem/10814

#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, string> v1, pair<int, string> v2)
{
	return v1.first < v2.first;
}

vector<pair<int, string>> v(100005);
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> v[i].first >> v[i].second;

	stable_sort(v.begin(), v.begin() + n, compare);

	for (int i = 0; i < n; i++)
		cout << v[i].first << " " << v[i].second << "\n";

	return 0;
}