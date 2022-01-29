// BOJ 2441 º°Âï±â - 4
// https://www.acmicpc.net/problem/2441
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) // 0 1 2 3 4
			cout << ' ';
		for (int j = i; j < n; j++)
			cout << "*";
		cout << '\n';
	}
	return 0;
}