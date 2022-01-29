// BOJ 10951. A + B - 4
// https://www.acmicpc.net/problem/10951

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while (1)
	{
		int a, b;
		if ((cin >> a >> b).eof() == true)
			break;

		cout << a + b << '\n';
	}

	return 0;
}