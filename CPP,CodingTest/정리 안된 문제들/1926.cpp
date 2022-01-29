#include <bits/stdc++.h>
using namespace std;

int board[502][502];
bool visited[502][502];

// �����¿�
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main_1926(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;

	//Init
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];

	int picMax = 0;
	int picNum = 0;

	// BFS Start Point Iter
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 0 || visited[i][j]) // �湮 �Ұ��̰ų� �̹� �湮�� ���
				continue;
			picNum++;
			queue<pair<int, int>> Q;
			visited[i][j] = 1; // (i,j)�� �������� BFS�� ������ �غ�.
			Q.push({ i, j });
			int area = 0;
			while (!Q.empty())
			{
				area++; // ť�� ���ִ� ���Ұ� ������ ���̸� 1 ���� ��Ŵ
				pair<int, int> cur = Q.front();
				Q.pop();
				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= m) // ���� ���� ���
						continue; // ����
					if (visited[nx][ny] || board[nx][ny] != 1) // �̹� �湮�� ĭ�̰ų� 1�� �ƴѰ��
						continue;
					visited[nx][ny] = 1; // �湮 ǥ��
					Q.push({nx, ny});
				}
			}

			picMax = max(picMax, area);
		}
	}
	cout << picNum << '\n' << picMax;
	return 0;
}