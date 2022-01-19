// BOJ 10804. 카드 역배치
// https://www.acmicpc.net/problem/10804
// Written By Rylah
// Date : 2022.01.03
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> v;
	for (int i = 1; i < 21; i++)
		v.emplace_back(i);
	int loop = 10;
	while (loop--)
	{
		int a, b;
		cin >> a >> b;
		reverse(v.begin() + a - 1, v.begin() + b);
	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	return 0;
}
