// 0xFD. Practice
// Written by : Rylah
// Date : 2022.03.12
// 1992. Äõµå Æ®¸®

#include <bits/stdc++.h>
using namespace std;

int board[70][70];

bool check(int x, int y, int n)
{
	for (int i = x; i < x + n; i++)
		for (int j = y; j < y + n; j++)
			if (board[x][y] != board[i][j])
				return false;
	return true;
}

void quad_tree(int x, int y, int n)
{
	if (check(x, y, n))
	{
		cout << board[x][y];
		return;
	}

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			quad_tree(x + i * n / 2, y * n / 2, n / 2);
}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		for (int j = 0; j < n; j++)
			board[i][j] = str[j] - '0';
	}

	quad_tree(0, 0, n);

	return 0;
}


