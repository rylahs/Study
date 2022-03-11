// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.17
// 1926. 그림
// https://www.acmicpc.net/problem/1926
// https://www.acmicpc.net/source/39191946

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[502][502];
bool visited[502][502];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];

	int picCnt = 0; // 그림 수
	int mxArea = 0; // 최대 넓이
	queue<pair<int, int>> Q; // BFS Queue

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int area = 0;
			
			if (board[i][j] == 1 && visited[i][j] == false)
			{
				picCnt++; // Picture Find!
				visited[i][j] = true; // Visited
				Q.push({ i, j }); // Push
				area++;
			}

			while (!Q.empty())
			{
				pair<int, int> cur = Q.front();
				Q.pop();

				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= m) // area range out
						continue;

					if (board[nx][ny] == 0 || visited[nx][ny] == true)
						continue;

					visited[nx][ny] = true;
					Q.push({ nx, ny });
					area++;
				}
			}

			mxArea = max(mxArea, area);
		}
	}
	
	cout << picCnt << "\n";
	cout << mxArea << "\n";

	return 0;
}