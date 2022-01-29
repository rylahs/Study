// BOJ 1431. 시리얼 번호
// https://www.acmicpc.net/problem/1431

#include <bits/stdc++.h>
using namespace std;

bool compare(const string& a, const string& b) {
	if (a.size() != b.size())
		return a.size() < b.size();
	int a_sum = 0, b_sum = 0;
	for (auto e : a)
		if (e - '0' >= 0 && e - '0' <= 9)
			a_sum += e - '0';
	for (auto e : b)
		if (e - '0' >= 0 && e - '0' <= 9)
			b_sum += e - '0';
	if (a_sum != b_sum)
		return a_sum < b_sum;
	return a < b;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<string> str;
	while (n--)
	{
		string input;
		cin >> input;
		str.emplace_back(input);
	}
	sort(str.begin(), str.end(), compare);
	for (auto e : str)
		cout << e << '\n';
	return 0;
}