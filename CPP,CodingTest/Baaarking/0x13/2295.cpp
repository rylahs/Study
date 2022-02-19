// 0x13. 이분 탐색
// Written by : Rylah
// Date : 2022.02.14
// 2295. 세 수의 합
// https://www.acmicpc.net/problem/2295


#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	vector<int> two;

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			two.emplace_back(v[i] + v[j]);

	sort(two.begin(), two.end());

	
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (binary_search(two.begin(), two.end(), v[i] - v[j]) == true)
			{
				cout << v[i] << "\n";
				return 0;
			}
		}
	}
	

	return 0;
}
