// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.05
// 7576. 토마토
// https://www.acmicpc.net/problem/7576
// https://www.acmicpc.net/source/38662721
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int m, n;
int board[1002][1002];
int dist[1002][1002];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> m >> n;
	queue < pair<int, int>> Q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 1) // 숙성된 토마토
				Q.push({ i, j });
			if (board[i][j] == 0) // 숙성 안된 토마토
				dist[i][j] = -1; // -1이면 BFS에서 돌아가게 만듬
		}
	}
	// Queue에 숙성된 토마토만큼 BFS에 들어가있으니 BFS 순회
	while (!Q.empty())
	{
		pair<int, int> cur = Q.front(); // 현재 Queue에 들어간 위치를 꺼냄
		Q.pop();

		for (int dir = 0; dir < 4; dir++) // 다음 방향 탐색
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			// 다음 좌표는 이렇게 순회

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) // 배열 밖으로 벗어나는 것이 목적이 아니므로 무시
				continue;
			if (dist[nx][ny] >= 0) // 이미 순회했거나(1 이상), 토마토가 심겨져 있지 않음(0)
				continue;

			dist[nx][ny] = dist[cur.X][cur.Y] + 1; // 다음 토마토 숙성일자
			Q.push({ nx, ny });
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (dist[i][j] == -1) // 익지 않은 토마토가 하나라도 있다면 (BFS를 돌지 않은 익지 않은 토마토)
			{
				cout << -1 << "\n";
				return 0;
			}
			ans = max(ans, dist[i][j]); // 가장 큰 값이 걸린 날짜
		}
	}
	cout << ans << "\n";
	return 0;
}
