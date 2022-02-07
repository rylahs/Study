// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.07
// 7562. 나이트의 이동 
// https://www.acmicpc.net/problem/7562
// Not Use Visit Array : https://www.acmicpc.net/source/38689391


#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n;
int board[303][303];

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
int main(void)
{
	ios::sync_with_stdio(false);
	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			fill(board[i], board[i] + n, -1);
		}
		int x, y;
		cin >> x >> y;

		int gx, gy;
		cin >> gx >> gy;
		
		queue<pair<int, int>> Q;
		board[x][y] = 0;
		Q.push({ x,y });

		while (board[gx][gy] == -1)
		{
			pair<int, int> cur = Q.front();
			Q.pop();

			for (int dir = 0; dir < 8; dir++)
			{
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || nx >= n || ny < 0 || ny >= n)
					continue;
				if (board[nx][ny] >= 0)
					continue;

				board[nx][ny] = board[cur.X][cur.Y] + 1;
				Q.push({ nx, ny });
			}
		}

		cout << board[gx][gy] << "\n";
	}
	return 0;
}
