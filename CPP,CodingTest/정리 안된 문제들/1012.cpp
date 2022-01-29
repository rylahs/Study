#include <bits/stdc++.h>
using namespace std;

int board[51][51];
bool visited[51][51];

// 상하좌우
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int testCase;
	cin >> testCase;
	while (testCase--)
	{
		int n, m, k;
		cin >> n >> m >> k;

		//Init
		
		for (int i = 0; i < k; i++)
		{
			int inputX, inputY;
			cin >> inputX >> inputY;
			board[inputX][inputY] = 1;
		}

		int vegNum = 0;

		// BFS Start Point Iter
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (board[i][j] == 0 || visited[i][j]) // 방문 불가이거나 이미 방문한 경우
					continue;
				vegNum++;
				queue<pair<int, int>> Q;
				visited[i][j] = 1; // (i,j)가 시작점인 BFS를 돌리는 준비.
				Q.push({ i, j });
				while (!Q.empty())
				{
					pair<int, int> cur = Q.front();
					Q.pop();
					for (int dir = 0; dir < 4; dir++)
					{
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];

						if (nx < 0 || nx >= n || ny < 0 || ny >= m) // 범위 밖인 경우
							continue; // 무시
						if (visited[nx][ny] || board[nx][ny] != 1) // 이미 방문한 칸이거나 1이 아닌경우
							continue;
						visited[nx][ny] = 1; // 방문 표시
						Q.push({ nx, ny });
					}
				}
			}
		}
		cout << vegNum << '\n';
		for (int i = 0; i < 51; i++)
		{
			for (int j = 0; j < 51; j++)
			{
				board[i][j] = 0;
				visited[i][j] = 0;
			}
		}
	}
	return 0;
}