// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.08
// 2468. 안전 영역
// https://www.acmicpc.net/problem/2468
// https://www.acmicpc.net/source/38732293

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[102][102];
int vis[102][102];

int n;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	int maxHeight = 0;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> board[i][j];
			maxHeight = max(maxHeight, board[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++)
		fill(vis[i], vis[i] + n, -1);

	vector<int> areaArr;
	for (int a = 0; a < maxHeight; a++)
	{
		int cnt = 0;
		queue<pair<int, int>> Q;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (board[i][j] <= a || vis[i][j] >= a)
					continue;
				cnt++;
				vis[i][j] = a;
				Q.push({ i, j });

				while (!Q.empty())
				{
					pair<int, int> cur = Q.front();
					Q.pop();

					for (int dir = 0; dir < 4; dir++)
					{
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];

						if (nx < 0 || nx >= n || ny < 0 || ny >= n)
							continue;
						if (board[nx][ny] <= a || vis[nx][ny] >= a)
							continue;

						vis[nx][ny] = a;
						Q.push({ nx, ny });
					}

				}
			}
			
		}
		areaArr.emplace_back(cnt);
	}



	cout << *max_element(areaArr.begin(), areaArr.end()) << "\n";



	return 0;
}
