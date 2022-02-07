// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 2587. 대표값 2
// https://www.acmicpc.net/problem/2587
// https://www.acmicpc.net/source/38336307

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 5;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.emplace_back(a);
	}
	sort(v.begin(), v.end()); // #include <algorithm>
	cout << accumulate(v.begin(), v.end(), 0) / v.size() << "\n"; // #include <numeric>
	cout << v[v.size() / 2];
	return 0;
}