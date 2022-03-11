// 0x11. Greedy
// Written by : Rylah
// Date : 2022.02.23
// 11399. ATM
// https://www.acmicpc.net/problem/11399


#include <bits/stdc++.h>
using namespace std;

int ATM[1005];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ATM[i];

	sort(ATM, ATM + n, less<>());

	for (int i = 1; i < n; i++)
		ATM[i] += ATM[i - 1];

	cout << accumulate(ATM, ATM + n, 0) << "\n";

	return 0;
}