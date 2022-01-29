#include <bits/stdc++.h>
using namespace std;

int main_11024(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int testCase;
	cin >> testCase;
	while (testCase--)
	{
		int sum = 0;
		int n, a;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			sum += a;
		}

		cout << sum << '\n';
	}
	return 0;
}