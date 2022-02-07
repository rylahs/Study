// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.07
// 7569. 토마토 
// https://www.acmicpc.net/problem/7569
// https://www.acmicpc.net/source/38688474

#include <bits/stdc++.h>
using namespace std;

int board[102][102][102];
int dist[102][102][102];

int h, n, m;

int dx[6] = { 0, 0, -1, 1, 0, 0 };
int dy[6] = { 0, 0, 0, 0, -1, 1 };
int dz[6] = { -1, 1, 0, 0, 0, 0, };

int main(void)
{
	ios::sync_with_stdio(false);
	cin >> m >> n >> h;

	queue<tuple<int, int, int>> Q;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				cin >> board[i][j][k];
				if (board[i][j][k] == 1)
					Q.push({ i, j, k });
				if (board[i][j][k] == 0)
					dist[i][j][k] = -1;
			}
		}
	}

	while (!Q.empty())
	{
		tuple<int, int, int> cur = Q.front();
		Q.pop();
		int curZ, curX, curY;
		tie(curZ, curX, curY) = cur;

		for (int dir = 0; dir < 6; dir++)
		{
			int nx = curX + dx[dir];
			int ny = curY + dy[dir];
			int nz = curZ + dz[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h)
				continue;
			if (dist[nz][nx][ny] >= 0)
				continue;

			dist[nz][nx][ny] = dist[curZ][curX][curY] + 1;
			Q.push({ nz, nx, ny });
		}
	}
	int completeValue = 0;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				if (dist[i][j][k] == -1)
				{
					cout << -1 << "\n";
					return 0;
				}
				completeValue = max(completeValue, dist[i][j][k]);
			}
		}
	}

	cout << completeValue << "\n";

	return 0;
}
