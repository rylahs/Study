#include <bits/stdc++.h>
using namespace std;

int main_9085(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int testCase;
	cin >> testCase;
	while (testCase--)
	{
		int n;
		cin >> n;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			sum += a;
		}
		cout << sum << '\n';
	}
	return 0;
}