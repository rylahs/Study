// Goorm Level 1. 4 mult
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43112/%EB%84%A4-%EC%88%98%EC%9D%98-%EA%B3%B1/quiz/1

#include <bits/stdc++.h>
using namespace std;

int mul(int a, int b)
{
	return a * b;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << mul(mul(a, b), mul(c, d));
	return 0;
}