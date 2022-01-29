#include <bits/stdc++.h>
using namespace std;

int main_2439(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			cout << ' ';
		}
		for (int j = n - i; j <= n; j++)
		{
			cout << "*";
		}

		cout << '\n';
	}
	return 0;
}