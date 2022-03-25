#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int a = 1;
	int b = 1;

	while (a * b < n)
	{
		if (a > b) b += 1;
		else a += 1;
	}

	cout << a << " " << b << "\n";
	return 0;
}