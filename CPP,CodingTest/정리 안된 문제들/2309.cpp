#include <bits/stdc++.h>
using namespace std;

int main_2309(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> v;
	vector<int> result(7, 0);
	int inputPeopleHeight;

	for (int i = 0; i < 9; i++)
	{
		cin >> inputPeopleHeight;
		v.emplace_back(inputPeopleHeight);
	}

	for (int i = 0; i < v.size() - 1; i++)
	{
		int sum = 0;
		for (int j = i + 1; j < v.size(); j++)
		{
			sum = 0;
			int idx = 0;
			for (int k = 0; k < v.size(); k++)
			{
				if (v[k] != v[i] && v[k] != v[j])
					result[idx++] = v[k];
			}

			for (int id = 0; id < result.size(); id++)
				sum += result[id];

			if (sum == 100)
				break;
		}
		if (sum == 100)
			break;
	}
	sort(result.begin(), result.end());

	for (int i = 0; i < result.size(); i++)
		cout << result[i] << '\n';

	return 0;
}