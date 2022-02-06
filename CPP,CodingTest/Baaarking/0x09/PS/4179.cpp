// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.07
// 4179. 불!
// https://www.acmicpc.net/problem/4179
// https://www.acmicpc.net/source/38673232
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string board[1002];
int distf[1002][1002];
int distj[1002][1002];

int n, m;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;

	for (int i = 0; i < n; i++) // Input Data 
		cin >> board[i];

	queue<pair<int, int>> Q1; // Fire Queue
	queue<pair<int, int>> Q2; // Jihoon Queue
	for (int i = 0; i < n; i++)
	{
		fill(distf[i], distf[i] + m, -1); // Init Fire Array
		fill(distj[i], distj[i] + m, -1); // Init Jihoon Array
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 'F') // Find Fire
			{
				distf[i][j] = 0;
				Q1.push({ i, j }); // Push Q1
			}
			if (board[i][j] == 'J') // Find Jihoon
			{
				distj[i][j] = 0;
				Q2.push({ i, j }); // Push Q2
			}
		}
	}

	// Fire BFS
	while (!Q1.empty())
	{
		pair<int, int> cur = Q1.front(); 
		Q1.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) // Out of Area 
				continue;

			if (board[nx][ny] == '#' || distf[nx][ny] >= 0) // Wall or already visited
				continue;

			distf[nx][ny] = distf[cur.X][cur.Y] + 1;
			Q1.push({ nx, ny }); // next Push
		}
	}

	// Jihoon BFS
	while (!Q2.empty())
	{
		pair<int, int> cur = Q2.front();
		Q2.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) // Out of Area == Escape 
			{
				cout << distj[cur.X][cur.Y] + 1 << "\n"; // Last Value + 1
				return 0;
			}

			if (distj[nx][ny] >= 0 || board[nx][ny] == '#') // Already Visited or Meet Wall
				continue;

			if (distf[nx][ny] != -1 && distf[nx][ny] <= distj[cur.X][cur.Y] + 1) // not wall , fire < jihoon (not go)
				continue;

			distj[nx][ny] = distj[cur.X][cur.Y] + 1;
			Q2.push({ nx, ny }); // Push
		}
	}


	cout << "IMPOSSIBLE\n"; // Reach this sentence no Escape
	return 0;
}
