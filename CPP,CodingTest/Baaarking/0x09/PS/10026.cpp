// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.07
// 10026. 적록색약 
// https://www.acmicpc.net/problem/10026
// https://www.acmicpc.net/source/38684702

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string board[101];
bool visited[101][101];

int n;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };
void bfs(int i, int j) 
{
	queue<pair<int, int>> Q;
	visited[i][j] = true;
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
			if (visited[nx][ny] != 0 || board[cur.X][cur.Y] != board[nx][ny])
				continue;
			
			visited[nx][ny] = true;
			Q.push({ nx, ny });
		}
	}
}
int area()
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (visited[i][j] == 0)
			{
				cnt++;
				bfs(i, j);
			}
		}
	}
	return cnt;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> board[i];

	int rgb = area();

	for (int i = 0; i < n; i++)
		fill(visited[i], visited[i] + n, false);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (board[i][j] == 'R')
				board[i][j] = 'G';
		}
	}

	int gb = area();

	cout << rgb << " " << gb << "\n";
	return 0;
}
