#include <bits/stdc++.h>
using namespace std;

int main_11931(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<int> v;
	int input;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.emplace_back(input);
	}
	sort(v.begin(), v.end(),less<>());

	for (auto e : v)
		cout << e << '\n';
	return 0;
}