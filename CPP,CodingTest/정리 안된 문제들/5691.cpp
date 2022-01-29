#include <bits/stdc++.h>
using namespace std;
int main_5691(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while (1)
	{
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		int c;
		c = a - (b - a);
		cout << c << '\n';
	}

	return 0;
}