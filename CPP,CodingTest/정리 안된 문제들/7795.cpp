#include <bits/stdc++.h>
using namespace std;

int main_7795(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int a, b;
		cin >> a >> b;
		vector<int> va, vb;
		for (int i = 0; i < a; i++)
		{
			int temp;
			cin >> temp;
			va.emplace_back(temp);
		}
		for (int i = 0; i < b; i++)
		{
			int temp;
			cin >> temp;
			vb.emplace_back(temp);
		}
		int count = 0;
		sort(va.begin(), va.end(), less<>());
		sort(vb.begin(), vb.end(), less<>());
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				if (va[i] > vb[j])
				{
					count++;
				}
				else {
					break;
				}
			}
		}

		cout << count << '\n';

	}
	return 0;
}