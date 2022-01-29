// BOJ 2443 º°Âï±â - 6
// https://www.acmicpc.net/problem/2443
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < n - i - 1; j++)
			cout << ' ';
		for (int j = 0; j < 2 * i + 1; j++)
			cout << "*";

		cout << '\n';
	}
	return 0;
}