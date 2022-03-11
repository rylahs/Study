// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 2523
// 

#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << "\n";
	}

	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}