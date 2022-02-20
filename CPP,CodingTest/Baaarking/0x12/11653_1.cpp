// 0x12. Math
// Written by : Rylah
// Date : 2022.02.14
// 11653. 소인수분해
// https://www.acmicpc.net/problem/11653
// https://www.acmicpc.net/source/39034788


#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			cout << i << "\n";
			n /= i;
		}
	}

	if (n != 1) // 예외 처리
		cout << n;
	return 0;
}