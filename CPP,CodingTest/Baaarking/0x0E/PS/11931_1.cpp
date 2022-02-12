// 0x0E. 정렬 I
// Written by : Rylah
// Date : 2022.02.12
// 11931. 수 정렬하기 4
// https://www.acmicpc.net/problem/11931
// https://www.acmicpc.net/source/38955672

#include <bits/stdc++.h>
using namespace std;

int n, a;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	vector<int> v(n, 0);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end(), greater<>());

	for (auto& e : v)
		cout << e << "\n";
	return 0;
}