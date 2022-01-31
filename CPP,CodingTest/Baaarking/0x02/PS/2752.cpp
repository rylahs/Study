// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 2752. 세수정렬
// https://www.acmicpc.net/problem/2752
// https://www.acmicpc.net/source/38335647

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<int> v;
	int a;
	for (int i = 0; i < 3; i++)
	{
		cin >> a;
		v.emplace_back(a);
	}

	sort(v.begin(), v.end());

	for (auto& e : v)
	{
		cout << e << " ";
	}
	return 0;
}