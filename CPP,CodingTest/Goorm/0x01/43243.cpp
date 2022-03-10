// Goorm Level 1. Bubble Sort
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43243/bubble-sort/quiz/1


#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			if (v[j - 1] > v[j])
				swap(v[j - 1], v[j]);
		}
	}
	for (auto& e : v)
		cout << e << " ";
	return 0;
}