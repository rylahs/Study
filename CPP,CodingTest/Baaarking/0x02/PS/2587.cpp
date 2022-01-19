// BOJ 2587. ´ëÇ¥°ª2
// https://www.acmicpc.net/problem/2587
// Written By Rylah
// Date : 2022.01.03
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<int> v;
	int input;
	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		v.emplace_back(input);
	}
	sort(v.begin(), v.end());
	cout << accumulate(v.begin(), v.end(), 0) / 5 << '\n';
	cout << v[2] << '\n';

	return 0;
}
