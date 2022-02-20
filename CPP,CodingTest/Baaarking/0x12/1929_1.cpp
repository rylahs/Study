// 0x12. Math
// Written by : Rylah
// Date : 2022.02.14
// 1929. 소수 구하기
// https://www.acmicpc.net/problem/1929
// https://www.acmicpc.net/source/39033687

// O(NloglogN)

#include <bits/stdc++.h>
using namespace std;


vector<int> sieve(int n)
{
	vector<int> primes;
	vector<bool> isPrime(n + 1, true);
	isPrime[1] = false;

	for (int i = 2; i * i <= n; i++)
	{
		if (!isPrime[i])
			continue;

		for (int j = i * i; j <= n; j += i)
		{
			isPrime[j] = false;
		}
	}

	for (int i = 2; i <= n; i++)
		if (isPrime[i])
			primes.emplace_back(i);

	return primes;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m, n;
	cin >> m >> n;
	
	vector<int> ans = sieve(n);

	for (auto& e : ans)
	{
		if (e < m)
			continue;

		cout << e << "\n";
	}

	return 0;
}