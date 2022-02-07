// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.07
// 1012. 유기농 배추 
// https://www.acmicpc.net/problem/1012
// https://www.acmicpc.net/submit/1012/38676647

#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[51][51];
bool visited[51][51];

int m, n, k;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int testCase; // TestCase
	cin >> testCase;

	while (testCase--)
	{
		cin >> m >> n >> k; // Col, Row, InputCaseNum
		for (int i = 0; i < n; i++)
		{
			fill(board[i], board[i] + m, 0); // Init
			fill(visited[i], visited[i] + m, 0); // Init
		}

		for (int i = 0; i < k; i++)
		{
			int x, y;
			cin >> x >> y;
			board[y][x] = 1; // Warning
		}

		int cnt = 0; // Init Cnt
		queue<pair<int, int>> Q;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (board[i][j] == 1 && visited[i][j] == 0) // Find BFS Start Point
				{
					visited[i][j] = true; // Visited
					cnt++; // Cnt++
					Q.push({ i, j }); // Push~
				}

				while (!Q.empty()) // BFS~
				{
					pair<int, int> cur = Q.front();
					Q.pop();
					for (int dir = 0; dir < 4; dir++)
					{
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];

						if (nx < 0 || nx >= n || ny < 0 || ny >= m) // Area Range Out
							continue;

						if (board[nx][ny] == 0 || visited[nx][ny] != 0) // Not Move area or Already Visited 
							continue;

						visited[nx][ny] = true;
						Q.push({ nx, ny });
					}
				}
			}
		}
		cout << cnt << "\n";
	}

	return 0;
}