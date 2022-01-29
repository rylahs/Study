#include <bits/stdc++.h>
using namespace std;

int main_23969(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> v;
	int n, k, input;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.emplace_back(input);
	}
	int count = 0;
	for (int i = (int)v.size() - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (v[j] > v[static_cast<std::vector<int, std::allocator<int>>::size_type>(j) + 1])
			{
				swap(v[j], v[static_cast<std::vector<int, std::allocator<int>>::size_type>(j) + 1]);
				count++;
				if (count == k)
				{
					for (auto e : v)
						cout << e << ' ';
					return 0;
				}
			}
		}
	}
	if (count < k)
		cout << -1;


	return 0;
}