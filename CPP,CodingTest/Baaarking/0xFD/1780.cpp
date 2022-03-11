// 0xFD. Practice
// Written by : Rylah
// Date : 2022.03.11
// 1780. 종이의 개수
// https://www.acmicpc.net/problem/1780

#include <bits/stdc++.h>
using namespace std;

int board[2200][2200];
int cnt[3];

bool check(int x, int y, int n)
{
	for (int i = x; i < x + n; i++)
		for (int j = y; j < y + n; j++)
			if (board[x][y] != board[i][j])
				return false;
	return true;
}

void paper(int x, int y, int z)
{
	if (check(x, y, z))
	{
		cnt[board[x][y] + 1] += 1;
		return;
	}
	int n = z / 3;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			paper(x + i * n, y + j * n, n);
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> board[i][j];
	}

	paper(0, 0, n);
	
	for (int i = 0; i < 3; i++)
		cout << cnt[i] << "\n";

	

	return 0;
}