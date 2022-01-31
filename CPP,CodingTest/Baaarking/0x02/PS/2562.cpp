// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 2562. 최댓값
// https://www.acmicpc.net/problem/2562
// https://www.acmicpc.net/source/38339836
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int maxV = -1;

	int n = 9;
	int maxIdx = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		maxV = max(maxV, a);
		if (maxV == a)
			maxIdx = i + 1;
	}

	cout << maxV << "\n";
	cout << maxIdx << "\n";

	return 0;
}