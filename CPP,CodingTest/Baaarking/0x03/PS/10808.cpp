// BOJ 10808. ¾ËÆÄºª °³¼ö
// Written Date : 22.01.20
// Writer : Rylah
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	getline(cin, str);
	vector<int> v(26, 0);
	for (int i = 0; i < str.size(); i++)
		v[str[i] - 'a']++;

	for (auto& e : v)
		cout << e << " ";


	return 0;
}