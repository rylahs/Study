// Goorm Level 1. min ele
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43125/%EC%B5%9C%EC%86%8C%EA%B0%92/quiz/1

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

	cout << *min_element(v.begin(), v.end());
	return 0;
}