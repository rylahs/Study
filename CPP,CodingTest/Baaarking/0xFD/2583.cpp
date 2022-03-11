// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.17
// 2583. 영역 구하기
// https://www.acmicpc.net/problem/2583

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[102][102];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int m, n, k;
	cin >> m >> n >> k;
	
	vector<int> areaVector;

	for (int i = 0; i < n; i++)
		fill(board[i], board[i] + m, -1);

	while (k--)
	{
		pair<int, int> point_low, point_high;
		cin >> point_low.X >> point_low.Y >> point_high.X >> point_high.Y;

		for (int i = point_low.X; i < point_high.X; i++)
			for (int j = point_low.Y; j < point_high.Y; j++)
				board[i][j] = 0;
	}

	queue<pair<int, int>> Q;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int area = 0;
			if (board[i][j] == -1)
			{
				area++;
				board[i][j] = 1;
				Q.push({ i, j });
			}
			while (!Q.empty())
			{
				pair<int, int> cur = Q.front();
				Q.pop();

				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= m)
						continue;
					if (board[nx][ny] >= 0)
						continue;

					area++;
					board[nx][ny] = board[cur.X][cur.Y] + 1;
					Q.push({ nx, ny });
				}
			}
			if (area > 0)
				areaVector.emplace_back(area);

		}
	}


	cout << areaVector.size() << "\n";
	sort(areaVector.begin(), areaVector.end());
	for (auto& e : areaVector)
		cout << e << " ";
	cout << "\n";

	return 0;
}