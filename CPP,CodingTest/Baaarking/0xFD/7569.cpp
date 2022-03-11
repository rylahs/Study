// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.17
// 7569. 토마토
// 

#include <bits/stdc++.h>
using namespace std;
int board[102][102][102];
int dist[102][102][102];

int dz[6] = { -1, 1, 0, 0, 0, 0 };
int dx[6] = {0, 0, -1, 1, 0, 0};
int dy[6] = {0, 0, 0, 0, -1, 1};
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int m, n, h;
	cin >> m >> n >> h;

	queue<tuple<int, int, int>> Q;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			fill(dist[i][j], dist[i][j] + m, -1);
			for (int k = 0; k < m; k++)
			{
				cin >> board[i][j][k];
				if (board[i][j][k] == -1)
					dist[i][j][k] = 0;

				if (board[i][j][k] == 1)
				{
					Q.push({ i,j,k });
					dist[i][j][k] = 0;
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

			if (nz < 0 || nz >= h || nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (dist[nz][nx][ny] >= 0)
				continue;
			dist[nz][nx][ny] = dist[curZ][curX][curY] + 1;
			Q.push({ nz, nx, ny });
		}
	}
	bool isAllFind = true;
	int mxDate = -1;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				if (dist[i][j][k] == -1)
					isAllFind = false;
				mxDate = max(dist[i][j][k], mxDate);
			}
		}
	}

	if (!isAllFind)
		cout << -1 << "\n";
	else
		cout << mxDate << "\n";
	return 0;
}