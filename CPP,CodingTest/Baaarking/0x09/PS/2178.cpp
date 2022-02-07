// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.05
// 2178. 미로 탐색
// https://www.acmicpc.net/problem/2178
// https://www.acmicpc.net/source/38639086

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int n, m;
string board[102];
int dist[102][102];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m; 
	for (int i = 0; i < n; i++)
		cin >> board[i];

	for (int i = 0; i < n; i++)
		fill(dist[i], dist[i] + m, -1);

	queue<pair<int, int>> Q;
	dist[0][0] = 0;
	Q.push({ 0, 0 });

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
			if (board[nx][ny] != '1' || dist[nx][ny] >= 0)
				continue;
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			Q.push({ nx, ny });
		}
	}
	cout << dist[n - 1][m - 1] + 1 << "\n";
	//cout << "\n";
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < m; j++)
	//	{
	//		cout << dist[i][j] << " ";
	//	}
	//	cout << "\n";
	//}
	return 0;
}