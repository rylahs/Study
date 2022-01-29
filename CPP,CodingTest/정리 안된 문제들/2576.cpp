#include <bits/stdc++.h>
using namespace std;

int main_2576(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<int> v;
	int inputNumber;
	int sumNumber = 0;
	for (int i = 0; i < 7; i++)
	{
		cin >> inputNumber;
		if (inputNumber % 2 == 1)
		{
			v.emplace_back(inputNumber);
			sumNumber += inputNumber;
		}
	}
	
	if (v.empty())
	{
		cout << -1 << '\n';
	}

	else
	{
		stable_sort(v.begin(), v.end());
		cout << sumNumber << '\n';
		cout << v[0] << '\n';
	}

	return 0;
}