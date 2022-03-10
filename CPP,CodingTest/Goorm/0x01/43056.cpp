// Goorm Level 1. SRP
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43056/%EA%B0%80%EC%9C%84%EB%B0%94%EC%9C%84%EB%B3%B4/quiz/1

#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int srp[4] = {};

	int a;
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		++srp[a];
	}

	// All Same Things
	if (srp[1] == 0 && srp[2] == 0 || srp[1] == 0 && srp[3] == 0 || srp[2] == 0 && srp[3] == 0)
		cout << 0 << "\n";

	// Result S R P
	else if (srp[1] == 0 && srp[2] != 0 && srp[3] != 0)
		cout << srp[3] << "\n";

	else if (srp[1] != 0 && srp[2] == 0 && srp[3] != 0)
		cout << srp[1] << "\n";

	else if (srp[1] != 0 && srp[2] != 0 && srp[3] == 0)
		cout << srp[2] << "\n";

	// All Select
	else
		cout << 0 << "\n";

	return 0;
}