// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 9461. 파도반 수열
// https://www.acmicpc.net/problem/9461
// https://www.acmicpc.net/source/38986748

#include <bits/stdc++.h>
using namespace std;

long long tri[102];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	tri[1] = 1;
	tri[2] = 1;
	for (int i = 3; i <= 100; i++)
		tri[i] = tri[i - 2] + tri[i - 3];
	
	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int n;
		cin >> n;

		cout << tri[n] << "\n";
	}

	
	return 0;
}
