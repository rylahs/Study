#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> v;
	vector<int> ans;
	int n, input;
	cin >> n;
	bool isTrue = false;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.emplace_back(input);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		ans.emplace_back(input);
	}

	for (int i = v.size() - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (v[j] > v[static_cast<std::vector<int, std::allocator<int>>::size_type>(j) + 1])
				swap(v[j], v[static_cast<std::vector<int, std::allocator<int>>::size_type>(j) + 1]);
		}
	}
	isTrue = true;
	for (int k = 0; k < (int)ans.size(); k++)
	{
		if (v[k] != ans[k])
		{
			isTrue = false;
			break;
		}
	}
	if (isTrue == true)
	{
		std::cout << 1;
		return 0;
	}
	std::cout << 0;
	return 0;
}