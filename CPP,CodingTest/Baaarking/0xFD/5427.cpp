// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.17
// 5427. 불
// https://www.acmicpc.net/problem/5427

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string building[1002];
int distFire[1002][1002];
int distPeople[1002][1002];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int n, m;
		cin >> m >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> building[i];
			fill(distFire[i], distFire[i] + m, -1);
			fill(distPeople[i], distPeople[i] + m, -1);
		}

		queue<pair<int, int>> fQ, pQ;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (building[i][j] == '*')
				{
					distFire[i][j] = 0;
					fQ.push({ i, j });
				}
				if (building[i][j] == '@')
				{
					distPeople[i][j] = 0;
					pQ.push({ i, j });
				}
			}
		}

		while (!fQ.empty())
		{
			pair<int, int> cur = fQ.front();
			fQ.pop();

			for (int dir = 0; dir < 4; dir++)
			{
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || nx >= n || ny < 0 || ny >= m)
					continue;
				if (building[nx][ny] == '#' || distFire[nx][ny] >= 0)
					continue;

				distFire[nx][ny] = distFire[cur.X][cur.Y] + 1;
				fQ.push({ nx, ny });
			}
		}

		bool isEscape = false;
		while (!pQ.empty() && !isEscape)
		{
			pair<int, int> cur = pQ.front();
			pQ.pop();

			for (int dir = 0; dir < 4; dir++)
			{
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				{
					isEscape = true;
					cout << distPeople[cur.X][cur.Y] + 1 << "\n";
					break;
				}

				if (building[nx][ny] == '#' || distPeople[nx][ny] >= 0)
					continue;

				if (distFire[nx][ny] != -1 && distFire[nx][ny] <= distPeople[cur.X][cur.Y] + 1)
					continue;

				distPeople[nx][ny] = distPeople[cur.X][cur.Y] + 1;
				pQ.push({ nx, ny });

			}
		}

		if (!isEscape)
			cout << "IMPOSSIBLE\n";
	}

	return 0;
}