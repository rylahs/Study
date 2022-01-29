#include <bits/stdc++.h>
using namespace std;
bool isPrimeNum(int n)
{
	if (n < 2)
		return false;
	else
	{
		for (int i = 2; i * i <= n; i++)
		{
			if (n % i == 0)
				return false;
		}
		return true;
	}
	
}

int main_1978(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int count = 0;
	int input;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (isPrimeNum(input) == true)
			count++;
	}
	cout << count;
	return 0;
}