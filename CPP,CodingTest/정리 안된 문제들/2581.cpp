#include <bits/stdc++.h>
using namespace std;
int num = 10002;
int arrr[10002];
int minIdx = 10002;
int sum;
void primeNumberS(int a, int b)
{
	for (int i = 2; i <= num; i++)
		arrr[i] = i;
	for (int i = 2; i <= num; i++)
	{
		if (arrr[i] == 0)
			continue;
		for (int j = i + i; j <= num; j += i)
			arrr[j] = 0;
	}
	
	for (int i = a; i <= b; i++)
	{
		if (arrr[i] != 0)
		{
			sum += arrr[i];
			if (minIdx > i)
				minIdx = i;
		}
	}
}

int main_2581(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int m, n;
	cin >> m >> n;
	primeNumberS(m, n);
	if (sum == 0)
		cout << -1;
	else
		cout << sum << '\n' << arrr[minIdx] << '\n';
	return 0;
}