#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> v(26, -1);
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		int a = str[i] - 'a';
		if (v[a] == -1)
			v[a] = i;
	}
	for (auto e : v)
		cout << e << " ";
	return 0;
}