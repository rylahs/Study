// 0x12. Math
// Written by : Rylah
// Date : 2022.02.14
// 1978. 소수 찾기
// https://www.acmicpc.net/problem/1978
// https://www.acmicpc.net/source/39032724

// O(N)

#include <bits/stdc++.h>
using namespace std;

bool isPrimeN(int n)
{
	if (n == 1)
		return false;
	for (int i = 2; i < n; i++)
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

	int n;
	cin >> n;
	
	int input;

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (isPrimeN(input))
			cnt++;
	}

	cout << cnt << "\n";

	return 0;
}