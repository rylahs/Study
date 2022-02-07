// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.07
// 5427. 불
// https://www.acmicpc.net/problem/5427
// https://www.acmicpc.net/source/38705145

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string board[1001]; // Building
int distf[1001][1001]; // Fire Distance Array
int dists[1001][1001]; // Sang Geun Distance Array

int m, n; // N * M

int dx[4] = { -1, 0, 1, 0 }; // Move X
int dy[4] = { 0, -1, 0, 1 }; // Move Y

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase; 
	cin >> testCase;

	while (testCase--)
	{
		bool isEscape = false; // isEscape 
		cin >> m >> n;

		for (int i = 0; i < n; i++) // Input Building
			cin >> board[i];

		for (int i = 0; i < n; i++) // Init Distance Arrays
		{
			fill(distf[i], distf[i] + m, -1);
			fill(dists[i], dists[i] + m, -1);
		}

		queue<pair<int, int>> Q1; // Fire Queue
		queue<pair<int, int>> Q2; // Sang Geun Queue
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (board[i][j] == '*') // Find Fire
				{
					distf[i][j] = 0;
					Q1.push({ i, j }); // Push
				}
				if (board[i][j] == '@') // Find Sang Geun
				{
					dists[i][j] = 0;
					Q2.push({ i, j }); // Push
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

				if (nx < 0 || nx >= n || ny < 0 || ny >= m) // Range Out
					continue;
				if (board[nx][ny] == '#' || distf[nx][ny] >= 0) // Meeting Wall or already visited
					continue;

				distf[nx][ny] = distf[cur.X][cur.Y] + 1;
				Q1.push({ nx, ny }); // Push next
			}
		}

		// Sang Geun BFS
		while (!Q2.empty() && !isEscape) 
		{
			pair<int, int> cur = Q2.front();
			Q2.pop();

			for (int dir = 0; dir < 4; dir++)
			{
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || nx >= n || ny < 0 || ny >= m) // Range Out => Escape Success
				{
					cout << dists[cur.X][cur.Y] + 1 << "\n";
					isEscape = true;
					break;
				}

				if (board[nx][ny] == '#' || dists[nx][ny] >= 0) // Meet Wall or Visited
					continue;
				if (distf[nx][ny] != -1 && distf[nx][ny] <= dists[cur.X][cur.Y] + 1) // Wall(Fire Array : -1) && Fire < Sang guen (don't move)
					continue;

				dists[nx][ny] = dists[cur.X][cur.Y] + 1;
				Q2.push({ nx, ny });
			}
		}
		if (!isEscape) // Reach This Can't Escape Building
			cout << "IMPOSSIBLE\n";
	}

	return 0;
}