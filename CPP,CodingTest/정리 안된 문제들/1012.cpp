#include <bits/stdc++.h>
using namespace std;

int board[51][51];
bool visited[51][51];

// �����¿�
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int testCase;
	cin >> testCase;
	while (testCase--)
	{
		int n, m, k;
		cin >> n >> m >> k;

		//Init
		
		for (int i = 0; i < k; i++)
		{
			int inputX, inputY;
			cin >> inputX >> inputY;
			board[inputX][inputY] = 1;
		}

		int vegNum = 0;

		// BFS Start Point Iter
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (board[i][j] == 0 || visited[i][j]) // �湮 �Ұ��̰ų� �̹� �湮�� ���
					continue;
				vegNum++;
				queue<pair<int, int>> Q;
				visited[i][j] = 1; // (i,j)�� �������� BFS�� ������ �غ�.
				Q.push({ i, j });
				while (!Q.empty())
				{
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
						Q.push({ nx, ny });
					}
				}
			}
		}
		cout << vegNum << '\n';
		for (int i = 0; i < 51; i++)
		{
			for (int j = 0; j < 51; j++)
			{
				board[i][j] = 0;
				visited[i][j] = 0;
			}
		}
	}
	return 0;
}