// 0xFD. Practice
// Written by : Rylah
// Date : 2022.03.12
// 1780. ������ ����

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
void paper(int x, int y, int n)
{
	if (check(x, y, n))
	{
		++cnt[board[x][y] + 1];
		return;
	}

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			paper(x + i * n / 3, y + j * n / 3, n / 3);


}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> board[i][j];

	paper(0, 0, n);

	for (int i = 0; i < 3; i++)
		cout << cnt[i] << "\n";

	return 0;
}