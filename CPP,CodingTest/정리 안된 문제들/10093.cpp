// BOJ 10093. ¼ýÀÚ
// https://www.acmicpc.net/problem/10093

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long a, b;
	cin >> a >> b;
	if (a > b)
		swap(a, b);
	if (a == b)
		cout << 0;
	else {
		cout << b - a - 1 << '\n';

		for (long long i = a + 1; i < b; i++)
			cout << i << ' ';
		cout << '\n';
	}
	return 0;
}