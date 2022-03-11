// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.17
// 1012. 유기농 배추
// https://www.acmicpc.net/problem/1012

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int vegetable[52][52];
bool vis[52][52];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;
	
	while (testCase--)
	{
		for (int i = 0; i < 52; i++)
		{
			fill(vegetable[i], vegetable[i] + 52, 0);
			fill(vis[i], vis[i] + 52, 0);
		}
		int n, m, k;
		cin >> m >> n >> k;

		while (k--)
		{
			int x, y;
			cin >> y >> x;
			vegetable[x][y] = 1;
		}

		queue<pair<int, int>> Q;
		int bugs = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (vegetable[i][j] == 1 && !vis[i][j])
				{
					vis[i][j] = true;
					Q.push({ i, j });
					bugs++;
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
						if (vis[nx][ny] || vegetable[nx][ny] != 1)
							continue;
						vis[nx][ny] = true;
						Q.push({ nx, ny });
					}
				}
			}
		}
		cout << bugs << "\n";
	}
	return 0;
}