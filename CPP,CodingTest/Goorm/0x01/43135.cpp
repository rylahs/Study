// Goorm Level 1. 3 Mult
// Written by Ryla
// Date : 2022.03.10
// https://level.goorm.io/exam/43135/3%EC%9D%98-%EB%B0%B0%EC%88%98-%EA%B2%8C%EC%9E%84/quiz/1

#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0)
			cout << "X" << " ";
		else
			cout << i << " ";
	}
	return 0;
}