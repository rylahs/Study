// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 10804. 카드 역배치
// https://www.acmicpc.net/problem/10804
// https://www.acmicpc.net/source/38338405

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v;
	for (int i = 0; i < 21; i++)
		v.emplace_back(i);

	for (int t = 0; t < 10; t++)
	{
		int a, b;
		cin >> a >> b;
		reverse(v.begin() + a, v.begin() + b + 1);
	}

	for (int i = 1; i < 21; i++)
		cout << v[i] << " ";
	return 0;
}