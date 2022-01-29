#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int n, m;
		cin >> n >> m;
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			v.emplace_back(a);
		}
		int target = v[m];

		sort(v.begin(), v.end(), greater<>());
		for (auto& e : v)
			cout << e << " ";
		cout << target << " \n";

	}

	return 0;
}