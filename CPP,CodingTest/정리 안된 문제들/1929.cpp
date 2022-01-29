#include <bits/stdc++.h>
using namespace std;
int number = 1000002;
int arr[1000002];
void primeNumberSieve(int a, int b)
{
	for (int i = 2; i <= number; i++)
		arr[i] = i;
	for (int i = 2; i <= number; i++)
	{
		if (arr[i] == 0)
			continue;
		for (int j = i + i; j <= number; j += i)
			arr[j] = 0;
	}

	for (int i = a; i <= b; i++)
	{
		if (arr[i] != 0)
			cout << arr[i] << '\n';
	}
}

int main_1929(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int m, n;
	cin >> m >> n;
	primeNumberSieve(m, n);
	return 0;
}