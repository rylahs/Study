// BOJ 10808. ¾ËÆÄºª °³¼ö
// https://www.acmicpc.net/problem/10808
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;
	vector<int> v(26, 0);
	for (int i = 0; i < s.size(); i++)
		v[s[i] - 'a']++;
	for (auto& e : v)
		cout << e << ' ';
	return 0;
}