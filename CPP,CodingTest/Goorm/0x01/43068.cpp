// Goorm Level 1. AI C
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43068/1a-%EC%9D%B8%EA%B3%B5%EC%A7%80%EB%8A%A5-%EC%B2%AD%EC%86%8C%EA%B8%B0/quiz/1

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;
	while (testCase--)
	{
		int x, y, n;
		cin >> x >> y >> n;

		int minDis = abs(x) + abs(y);
		if (n < minDis)
		{
			cout << "NO\n";
			continue;
		}
		else
		{
			if (minDis % 2 == n % 2)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}

	return 0;
}