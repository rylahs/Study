#include <bits/stdc++.h>
using namespace std;
int a[10002];
int main_10989(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	while (n--)
	{
		int input;
		cin >> input;
		a[input]++;
	}
	for (int i = 1; i <= 10001; i++)
	{
		if (a[i] != 0)
		{
			while (a[i] > 0)
			{
				cout << i << '\n';
				a[i]--;
			}
		}
	}
	return 0;
}