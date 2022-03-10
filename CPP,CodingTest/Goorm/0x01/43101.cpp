// Goorm Level 1. *
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43101/%EB%AA%A8%EC%96%91%EC%B0%8D%EA%B8%B0/quiz/1

#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = n - i - 1; j >= 0; j--)
			cout << "*";
		cout << "\n";
	}

	return 0;
}