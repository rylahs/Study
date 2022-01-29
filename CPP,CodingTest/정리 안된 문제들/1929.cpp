#include <bits/stdc++.h>
using namespace std;
bool isPrimeNum_A(int n)
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

int main_1929(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;
	
	for (int i = a; i <= b; i++)
	{
		if (isPrimeNum_A(i) == true)
			cout << i << '\n';
	}
	
	return 0;
}