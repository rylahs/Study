// BOJ 11399. ATM
// https://www.acmicpc.net/problem/11399

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v;
	while (n--)
	{
		int a;
		cin >> a;
		v.emplace_back(a);
	}
	sort(v.begin(), v.end());

	int sum = 0;
	for (auto& e : v)
	{
		e += sum;
		sum = e;
	}

	cout << accumulate(v.begin(), v.end(), 0) << '\n';
	return 0;
}
