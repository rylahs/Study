// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 2576. 홀수
// https://www.acmicpc.net/problem/2576
// https://www.acmicpc.net/source/38336199

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n = 7;
	vector<int> v;
	int minV = 101;
	for (int i = 0; i < 7; i++)
	{
		int a;
		cin >> a;
		if (a % 2 == 1)
		{
			v.emplace_back(a);
			minV = min(minV, a);
		}

	}
	if (v.empty())
		cout << -1 << "\n";
	else
	{
		cout << accumulate(v.begin(), v.end(), 0) << "\n";
		cout << minV << "\n";
	}
	return 0;
}