#include <bits/stdc++.h>
using namespace std;
string board[102];
bool visited[102][102];
int n;
int moveX[4] = {1, 0, -1, 0};
int moveY[4] = {0, 1, 0, -1};
void bfs(int i, int j)
{
	queue<pair<int, int>> Q;
	Q.push({ i, j });
	visited[i][j] = 1;
	while (!Q.empty())
	{
		pair<int, int> cur = Q.front();
		Q.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.first + moveX[dir];
			int ny = cur.second + moveY[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n)
				continue;
			if (visited[nx][ny] == 1 || board[i][j] != board[nx][ny])
				continue;
			
			visited[nx][ny] = 1;
			Q.push({ nx, ny });
		}
	}
}

int area()
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visited[i][j])
			{
				count++;
				bfs(i, j);
			}
		}
	}
	return count;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> board[i];

	int is_rg_see = area();

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
	int no_rg_see = area();
	cout << is_rg_see << " " << no_rg_see;
	return 0;
}