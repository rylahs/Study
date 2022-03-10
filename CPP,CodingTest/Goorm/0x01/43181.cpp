// Goorm Level 1. Pyramid
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/43181/%ED%94%BC%EB%9D%BC%EB%AF%B8%EB%93%9C/quiz/1

#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = n - i - 1; j >= 0; j--)
			cout << ' ';
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << "\n";
	}

	return 0;
}