// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 10804. 빠른 A + B
// https://www.acmicpc.net/problem/15552
// https://www.acmicpc.net/source/38338525

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}