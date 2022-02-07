// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.07
// 2583. 영역 구하기
// https://www.acmicpc.net/problem/2583
// https://www.acmicpc.net/source/38728253

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[101][101];

int m, n, k;
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> m >> n >> k;

	for (int i = 0; i < m; i++)
		fill(board[i], board[i] + n, -1);

	while (k--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = y1; i < y2; i++)
		{
			for (int j = x1; j < x2; j++)
			{
				board[i][j] = 0;
			}
		}
	}
	int cnt = 0;
	queue<pair<int, int>> Q;
	vector<int> v;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int area = 0;
			if (board[i][j] == -1)
			{
				area++; cnt++;
				board[i][j] = 1;
				Q.push({ i, j });

				while (!Q.empty())
				{
					pair<int, int> cur = Q.front();
					Q.pop();

					for (int dir = 0; dir < 4; dir++)
					{
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];

						if (nx < 0 || nx >= m || ny < 0 || ny >= n)
							continue;
						if (board[nx][ny] >= 0)
							continue;
						area++;
						board[nx][ny] = board[cur.X][cur.Y] + 1;
						Q.push({ nx, ny });
					}
				}	
				if (area >= 1)
					v.emplace_back(area);
			}
		}
	}
	sort(v.begin(), v.end());
	cout << cnt << "\n";
	for (auto& e : v)
		cout << e << " ";
	cout << "\n";
	return 0;
}