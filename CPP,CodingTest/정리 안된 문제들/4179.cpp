#include <bits/stdc++.h>
using namespace std;
string maze[1002];
int pdist[1002][1002];
int fdist[1002][1002];

int moveX[4] = { 1, 0, -1, 0 };
int moveY[4] = { 0, 1, 0, -1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;


	for (int i = 0; i < n; i++) // Initialize
	{
		fill(fdist[i], fdist[i] + m, -1);
		fill(pdist[i], pdist[i] + m, -1);
	}
		

	for (int i = 0; i < n; i++)
		cin >> maze[i];

	queue<pair<int, int> > fireQ;
	queue<pair<int, int> > jhQ;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
		{
			if (maze[i][j] == 'F')
			{
				fireQ.push({ i, j });
				fdist[i][j] = 0;
			}
			if (maze[i][j] == 'J')
			{
				jhQ.push({ i,j });
				pdist[i][j] = 0;
			}
		}
	}
	while (!fireQ.empty()) {
		pair<int, int> cur = fireQ.front();
		fireQ.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.first + moveX[dir];
			int ny = cur.second + moveY[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (fdist[nx][ny] >= 0 || maze[nx][ny] == '#')
				continue;
			fdist[nx][ny] = fdist[cur.first][cur.second] + 1;
			fireQ.push({ nx, ny });

		}
	}
	while (!jhQ.empty()) {
		pair<int, int> cur = jhQ.front();
		jhQ.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.first + moveX[dir];
			int ny = cur.second + moveY[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
			{
				cout << pdist[cur.first][cur.second] + 1;
				return 0;
			}
			if (pdist[nx][ny] >= 0 || maze[nx][ny] == '#')
				continue;
			if (fdist[nx][ny] != -1 && fdist[nx][ny] <= pdist[cur.first][cur.second] + 1)
				continue;
			pdist[nx][ny] = pdist[cur.first][cur.second] + 1;
			jhQ.push({ nx,ny });
		}
	}
	cout << "IMPOSSIBLE"; // 여기에 도달했다는 것은 탈출에 실패했음을 의미.

	return 0;
}