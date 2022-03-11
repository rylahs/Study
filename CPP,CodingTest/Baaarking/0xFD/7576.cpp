// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.17
// 7576. 토마토
// https://www.acmicpc.net/problem/7576

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[1002][1002];
int dist[1002][1002];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int m, n;
	cin >> m >> n;

	for (int i = 0; i < n; i++)
		fill(dist[i], dist[i] + m, -1);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == -1)
				dist[i][j] = 0;
		}
	}
	queue<pair<int, int>> Q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 1)
			{
				dist[i][j] = 0;
				Q.push({ i, j });
			}
		}
	}

	while (!Q.empty())
	{
		pair<int, int> cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (dist[nx][ny] >= 0)
				continue;
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			Q.push({ nx, ny });
		}
	}
	bool isComplete = true;
	int mxVal = -1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (dist[i][j] == -1)
			{
				isComplete = false;
				break;
			}
			mxVal = max(mxVal, dist[i][j]);
		}
	}

	if (!isComplete)
		cout << -1 << "\n";
	else
		cout << mxVal << "\n";
	
	return 0;
}