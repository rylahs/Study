// 0x0E. 정렬 I
// Written by : Rylah
// Date : 2022.02.12
// 2751. 수 정렬하기 2
// https://www.acmicpc.net/problem/2751
// https://www.acmicpc.net/source/38955087

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> v;
	int input;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.emplace_back(input);
	}
	sort(v.begin(), v.end(), less<>());

	for (auto e : v)
		cout << e << '\n';

	return 0;
}