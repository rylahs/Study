// BOJ 2577. 숫자의 개수
// https://www.acmicpc.net/problem/2577
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b, c;
	vector<int> v(10, 0);
	cin >> a >> b >> c;
	int result = a * b * c;
	while (result != 0)
	{
		v[result % 10]++;
		result /= 10;
	}
	for (auto& e : v)
		cout << e << '\n';
	return 0;
}