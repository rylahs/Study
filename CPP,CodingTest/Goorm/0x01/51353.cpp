// Goorm Level 1. snake
// Written by Rylah
// Date : 2022.03.10
// https://level.goorm.io/exam/51353/%EB%B1%80%EC%9D%B4-%EC%A7%80%EB%82%98%EA%B0%84-%EC%9E%90%EB%A6%AC/quiz/1

#include <bits/stdc++.h>
using namespace std;

char str[102][102];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	bool isRight = true;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i % 2 == 0)
				str[i][j] = '#';
			else
			{
				if (isRight && j == m - 1)
				{
					str[i][j] = '#';
					isRight = false;
					continue;
				}

				else if (!isRight && j == 0)
				{
					str[i][j] = '#';
					continue;
				}
				else if (!isRight && j == m - 1)
				{
					isRight = true;
					str[i][j] = '.';
				}
				else
					str[i][j] = '.';
			}
		}
	}
	

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << str[i][j];
		cout << "\n";
	}
	return 0;
}