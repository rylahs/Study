// BOJ 10871. X보다 작은 수
// https://www.acmicpc.net/problem/10871

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, x;
	vector<int> v;
	cin >> n >> x;
	while (n--)
	{
		int input;
		cin >> input;
		if (input < x)
			v.emplace_back(input);
	}
	for (auto e : v)
		cout << e << ' ';

	return 0;
}