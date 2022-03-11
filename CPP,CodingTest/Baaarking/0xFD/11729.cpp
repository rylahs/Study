// 0xFD. Practice
// Written by : Rylah
// Date : 2022.03.11
// 11729. 하노이 탑 이동 순서
// https://www.acmicpc.net/problem/11729

#include <bits/stdc++.h>
using namespace std;

void hanoi(int a, int b, int n)
{
	if (n == 1)
	{
		cout << a << ' ' << b << "\n";
		return;
	}
	hanoi(a, 6 - a - b, n - 1);
	cout << a << ' ' << b << "\n";
	hanoi(6 - a - b, b, n - 1);
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int k;
	cin >> k;
	cout << (1 << k) - 1 << "\n";
	hanoi(1, 3, k);
	return 0;
}