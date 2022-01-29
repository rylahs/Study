#include <bits/stdc++.h>
using namespace std;


int main_11651(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<pair<int, int>> v;
	int n;
	cin >> n;
	int inputA, inputB;
	for (int i = 0; i < n; i++)
	{
		cin >> inputB >> inputA;
		v.emplace_back(pair<int, int>(inputA, inputB));
	}
	stable_sort(v.begin(), v.end());

	for (auto e : v)
		cout << e.second << " " << e.first << '\n';
	return 0;
}