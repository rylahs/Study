#include <bits/stdc++.h>
using namespace std;

int main_2440()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = n - i; j > 0; j--)
			cout << "*";
		cout << '\n';
	}
	return 0;
}