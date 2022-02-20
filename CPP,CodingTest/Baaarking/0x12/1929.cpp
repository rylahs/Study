// 0x12. Math
// Written by : Rylah
// Date : 2022.02.14
// 1929. 소수 구하기
// https://www.acmicpc.net/problem/1929
// https://www.acmicpc.net/source/39033111

// O(sqrt(N))

#include <bits/stdc++.h>
using namespace std;

bool isPrimeSqrtN(int n)
{
	if (n == 1)
		return false;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m, n;
	cin >> m >> n;
	for (int i = m; i <= n; i++)
		if (isPrimeSqrtN(i))
			cout << i << "\n";
	
	return 0;
}