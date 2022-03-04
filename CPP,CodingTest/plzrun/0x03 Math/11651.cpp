// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.03
// 11651
// https://www.acmicpc.net/problem/11651

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v(100005);
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> v[i].second >> v[i].first;

	sort(v.begin(), v.begin() + n);

	for (int i = 0; i < n; i++)
		cout << v[i].second << " " << v[i].first << "\n";
	return 0;
}