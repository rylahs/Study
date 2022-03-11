// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.17
// 10026. 적록색약
// https://www.acmicpc.net/problem/10026

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string board[102];
bool visRGB[102][102];
bool visGB[102][102];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> board[i];

	queue<pair<int, int>> Q;
	int rgbArea = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visRGB[i][j])
			{
				visRGB[i][j] = true;
				Q.push({ i, j });
				rgbArea++;
			}

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
					if (visRGB[nx][ny] || board[cur.X][cur.Y] != board[nx][ny])
						continue;

					visRGB[nx][ny] = true;
					Q.push({ nx, ny });
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (board[i][j] == 'R')
				board[i][j] = 'G';
		}
	}
	int gbArea = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visGB[i][j])
			{
				visGB[i][j] = true;
				Q.push({ i, j });
				gbArea++;
			}

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
					if (visGB[nx][ny] || board[cur.X][cur.Y] != board[nx][ny])
						continue;

					visGB[nx][ny] = true;
					Q.push({ nx, ny });
				}
			}
		}
	}

	cout << rgbArea << " " << gbArea << "\n";

	return 0;
}