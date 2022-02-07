// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.07
// 2667. 단지번호붙이기
// https://www.acmicpc.net/problem/2667
// https://www.acmicpc.net/submit/2667/38729096

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string board[26];
int visited[26][26];

int n;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> board[i];

	queue<pair<int, int>> Q;
	vector<int> v;
	int cnt = 0;
	int area = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			area = 0;
			if (board[i][j] == '1' && visited[i][j] == 0)
			{
				cnt++;
				visited[i][j] = cnt;
				Q.push({ i, j });
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

					if (nx < 0 || nx >= n || ny < 0 || ny >= n)
						continue;
					if (board[nx][ny] == '0' || visited[nx][ny] >= 1)
						continue;

					visited[nx][ny] = visited[cur.X][cur.Y];
					area++;
					Q.push({ nx, ny });
				}
			}
			if (area >= 1)
				v.emplace_back(area);
		}
	}
	cout << cnt << "\n";
	sort(v.begin(), v.end());
	for (auto& e : v)
		cout << e << "\n";
	return 0;
}