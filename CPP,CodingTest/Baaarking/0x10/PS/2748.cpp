// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 2748. 피보나치 수 2
// https://www.acmicpc.net/problem/2748
// https://www.acmicpc.net/source/38987451

#include <bits/stdc++.h>
using namespace std;

long long fibo[92];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i < 91; i++)
		fibo[i] = fibo[i - 1] + fibo[i - 2];

	int n;
	cin >> n;

	cout << fibo[n] << "\n";

	return 0;
}
