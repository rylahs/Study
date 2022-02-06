// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.05
// 7576. �丶��
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
			if (board[i][j] == 1) // ������ �丶��
				Q.push({ i, j });
			if (board[i][j] == 0) // ���� �ȵ� �丶��
				dist[i][j] = -1; // -1�̸� BFS���� ���ư��� ����
		}
	}
	// Queue�� ������ �丶�丸ŭ BFS�� �������� BFS ��ȸ
	while (!Q.empty())
	{
		pair<int, int> cur = Q.front(); // ���� Queue�� �� ��ġ�� ����
		Q.pop();

		for (int dir = 0; dir < 4; dir++) // ���� ���� Ž��
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			// ���� ��ǥ�� �̷��� ��ȸ

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) // �迭 ������ ����� ���� ������ �ƴϹǷ� ����
				continue;
			if (dist[nx][ny] >= 0) // �̹� ��ȸ�߰ų�(1 �̻�), �丶�䰡 �ɰ��� ���� ����(0)
				continue;

			dist[nx][ny] = dist[cur.X][cur.Y] + 1; // ���� �丶�� ��������
			Q.push({ nx, ny });
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (dist[i][j] == -1) // ���� ���� �丶�䰡 �ϳ��� �ִٸ� (BFS�� ���� ���� ���� ���� �丶��)
			{
				cout << -1 << "\n";
				return 0;
			}
			ans = max(ans, dist[i][j]); // ���� ū ���� �ɸ� ��¥
		}
	}
	cout << ans << "\n";
	return 0;
}
