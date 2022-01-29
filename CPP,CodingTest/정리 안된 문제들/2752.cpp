// BOJ 2752. 세수정렬
// https://www.acmicpc.net/problem/2752

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v;
	for (int i = 0; i < 3; i++)
	{
		int input;
		cin >> input;
		v.emplace_back(input);
	}
	stable_sort(v.begin(), v.end());
	for (auto e : v)
		cout << e << ' ';
	return 0;
}