// BOJ 2839. º≥≈¡ πË¥ﬁ
// https://www.acmicpc.net/problem/2839

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int count = 0;
	while (n >= 0)
	{
		if (n % 5 == 0)
		{
			count += (n / 5);
			cout << count << '\n';
			return 0;
		}
		n -= 3;
		count++;
	}
	cout << -1 << '\n';
	return 0;
}
