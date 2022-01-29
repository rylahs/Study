#include <bits/stdc++.h>
using namespace std;

string maze[102];
int distan[102][102];

int dirX[4] = { 1, 0, -1, 0 };
int dirY[4] = { 0, 1, 0, -1 };

int main_2178(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> maze[i];
	for (int i = 0; i < n; i++)
		fill(distan[i], distan[i] + m, -1);
	queue<pair<int, int>> Q;
	Q.push({ 0,0 });
	distan[0][0] = 0;

	while (!Q.empty())
	{
		pair<int, int>cur = Q.front();
		Q.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.first + dirX[dir];
			int ny = cur.second + dirY[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (distan[nx][ny] >= 0 || maze[nx][ny] != '1')
				continue;
			distan[nx][ny] = distan[cur.first][cur.second] + 1;
			Q.push({ nx,ny });
		}
	}
	cout << distan[n - 1][m - 1] + 1;
	return 0;
}