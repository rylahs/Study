// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.05
// 1926. 그림 
// https://www.acmicpc.net/problem/1926
// https://www.acmicpc.net/source/38628465

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[502][502];
bool visited[502][502];

int n, m;
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];

	int nums = 0;
	int maxArea = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] != 1 || visited[i][j])
				continue;
			queue<pair<int, int>> Q;
			visited[i][j] = true;
			Q.push({ i, j });
			int area = 0;
			nums++;
			while (!Q.empty())
			{
				area++;
				pair<int, int> cur = Q.front();
				Q.pop();

				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= m)
						continue;
					if (visited[nx][ny] || board[nx][ny] != 1)
						continue;

					visited[nx][ny] = true;
					Q.push({ nx, ny });
				}
			}

			maxArea = max(area, maxArea);
		}
	}

	cout << nums << "\n" << maxArea << "\n";
	return 0;
}
