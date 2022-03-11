// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 6593. 상범 빌딩
// 

#include <bits/stdc++.h>
using namespace std;

string board[32][32];
int dist[32][32][32];

int dz[6] = {-1, 1, 0, 0, 0, 0};
int dx[6] = {0, 0, -1, 1, 0, 0};
int dy[6] = {0, 0, 0, 0, -1, 1};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	while (true)
	{
		int L, R, C;
		cin >> L >> R >> C;
		int goalZ = 0, goalX = 0, goalY = 0;
		if (L == 0 && R == 0 && C == 0)
			break;

		for (int i = 0; i < L; i++)
		{
			for (int j = 0; j < R; j++)
			{
				cin >> board[i][j];
				fill(dist[i][j], dist[i][j] + C, -1);
			}
		}
		
		queue<tuple<int, int, int>> Q;

		for (int i = 0; i < L; i++)
		{
			for (int j = 0; j < R; j++)
			{
				for (int k = 0; k < C; k++)
				{
					if (board[i][j][k] == '#')
						dist[i][j][k] = 0;

					if (board[i][j][k] == 'S')
					{
						dist[i][j][k] = 0;
						Q.push({ i, j, k });
					}

					if (board[i][j][k] == 'E')
					{
						goalZ = i;
						goalX = j;
						goalY = k;
					}
				}
			}
		}
		
		while (!Q.empty() && dist[goalZ][goalX][goalY] == -1)
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
				if (dist[nz][nx][ny] >= 0)
					continue;

				dist[nz][nx][ny] = dist[curZ][curX][curY] + 1;
				Q.push({ nz, nx, ny });
			}
		}

		if (dist[goalZ][goalX][goalY] == -1)
			cout << "Trapped!\n";
		else
			cout << "Escaped in " << dist[goalZ][goalX][goalY] << " minute(s).\n";

	}



	return 0;
}