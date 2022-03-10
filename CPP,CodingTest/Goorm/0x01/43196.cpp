// Goorm Level 1. Rectangle
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43196/%EC%84%B8%EB%A1%9C-%EC%88%9C%EC%84%9C-%EC%82%AC%EA%B0%81%ED%98%95/quiz/1

#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i + (n * (j - 1)) << " ";
		}
		cout << "\n";
	}

	return 0;
}