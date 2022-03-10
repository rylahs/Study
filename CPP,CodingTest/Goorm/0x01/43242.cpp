// Goorm Level 1. Change
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43242/%EA%B1%B0%EC%8A%A4%EB%A6%84%EB%8F%88/quiz/1


#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	
	int input;
	cin >> input;

	int change = 1000 - input;

	int coin[4] = { 500, 100, 50, 10 };
	int idx = 0;
	while (change != 0)
	{
		cout << change / coin[idx] << " ";
		change = change % coin[idx];
		++idx;
	}
	return 0;
}