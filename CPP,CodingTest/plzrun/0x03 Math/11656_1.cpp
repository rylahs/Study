// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 11656
// https://www.acmicpc.net/problem/11656

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;
	vector<string> v;
	for (int i = 0; i < str.size(); i++)
		v.emplace_back(str.substr(i));

	sort(v.begin(), v.end(), less<>());

	for (auto& e : v)
		cout << e << "\n";

	return 0;
}