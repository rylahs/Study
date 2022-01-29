#include <bits/stdc++.h>
using namespace std;

int main_2587(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> v;
	int inputFiveNum;
	int sumNum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> inputFiveNum;
		v.emplace_back(inputFiveNum);
		sumNum += inputFiveNum;
	}

	cout << sumNum / 5 << '\n';
	stable_sort(v.begin(), v.end());
	cout << v[2] << '\n';

	return 0;
}