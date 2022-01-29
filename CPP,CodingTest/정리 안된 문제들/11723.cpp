#include <bits/stdc++.h>
using namespace std;

int main_11723(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v;
	while (n--)
	{
		string com;
		cin >> com;

		if (com == "add")
		{
			int x;
			cin >> x;
			v.emplace_back(x);
		}
		if (com == "empty")
		{
			v.clear();
		}
		if (com == "check")
		{
			int search;
			cin >> search;
			bool find = false;
			for (auto& e : v)
			{
				if (e == search)
				{
					find = true;
					break;
				}
			}
			if (find == true)
				cout << 1 << '\n';
			else
				cout << 0 + '\n';
		}

		if (com == "all")
		{
			int k = 1;
			v.clear();
			v.resize(20, k++);
			fill(v.begin(), v.begin() + 20, k = k + 1);
			for (auto e : v)
				cout << e << " ";
		}
	}

	return 0;
}