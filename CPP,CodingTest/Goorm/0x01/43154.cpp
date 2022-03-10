// Goorm Level 1. Bit Calc
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43154/%EB%B9%84%ED%8A%B8%EC%97%B0%EC%82%B0-%EA%B8%B0%EB%B3%B8-1/quiz/1

#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int a, b;
	cin >> a >> b;
	cout << (a & b) << "\n";
	cout << (a | b) << "\n";
	cout << (a ^ b) << "\n";
	return 0;
}