// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.08
// 6593. 상범빌딩
// https://www.acmicpc.net/problem/6593
// https://www.acmicpc.net/source/38732839

#include <bits/stdc++.h>
using namespace std;
string board[32][32];
int dist[32][32][32];
int L, R, C;

int dx[6] = {0, 0, -1, 1, 0, 0};
int dy[6] = {0, 0, 0, 0, -1, 1};
int dz[6] = {-1, 1, 0, 0, 0, 0};
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	while (1)
	{
		cin >> L >> R >> C;
		if (L == 0 && R == 0 && C == 0)
			break;

		for (int i = 0; i < L; i++)
			for (int j = 0; j < R; j++)
				for (int k = 0; k < C; k++)
					dist[i][j][k] = -1;

		for (int i = 0; i < L; i++)
		{
			for (int j = 0; j < R; j++)
			{
				cin >> board[i][j];
			}
		}

		queue<tuple<int, int, int>> Q;
		for (int i = 0; i < L; i++)
		{
			for (int j = 0; j < R; j++)
			{
				for (int k = 0; k < C; k++)
				{
					if (board[i][j][k] == 'S')
					{
						dist[i][j][k] = 0;
						Q.push({ i, j, k });
					}
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
				int nz = curZ + dz[dir];
				int nx = curX + dx[dir];
				int ny = curY + dy[dir];
				
				if (nz < 0 || nz >= L || nx < 0 || nx >= R || ny < 0 || ny >= C)
					continue;
				if (board[nz][nx][ny] == '#' || dist[nz][nx][ny] >= 0)
					continue;
				dist[nz][nx][ny] = dist[curZ][curX][curY] + 1;
				Q.push({ nz, nx, ny });
			}
		}

		for (int i = 0; i < L; i++)
		{
			for (int j = 0; j < R; j++)
			{
				for (int k = 0; k < C; k++)
				{
					if (board[i][j][k] == 'E')
					{
						if (dist[i][j][k] == -1)
							cout << "Trapped!\n";
						else
							cout << "Escaped in " << dist[i][j][k] << " minute(s)." << "\n";
					}
				}
			}
		}
	}
	return 0;
}
