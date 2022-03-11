// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.17
// 7562. 나이트의 이동
// https://www.acmicpc.net/problem/7562

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int chess[302][302];

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2 };
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1 };
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
			fill(chess[i], chess[i] + n, -1);
		pair<int, int> knight, goal;
		cin >> knight.X >> knight.Y;
		cin >> goal.X >> goal.Y;

		chess[knight.X][knight.Y] = 0;

		queue<pair<int, int>> Q;
		Q.push({ knight.X, knight.Y });

		while (!Q.empty() || chess[goal.X][goal.Y] == -1)
		{
			pair<int, int> cur = Q.front();
			Q.pop();

			for (int dir = 0; dir < 8; dir++)
			{
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || nx >= n || ny < 0 || ny >= n)
					continue;
				if (chess[nx][ny] >= 0)
					continue;
				chess[nx][ny] = chess[cur.X][cur.Y] + 1;
				Q.push({ nx, ny });
			}
		}

		cout << chess[goal.X][goal.Y] << "\n";

	}

	return 0;
}