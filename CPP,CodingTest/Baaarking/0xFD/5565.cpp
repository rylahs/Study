#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < 9; i++)
	{
		int a;
		cin >> a;
		n -= a;
	}

	cout << n;

	return 0;
}