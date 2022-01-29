#include <bits/stdc++.h>
using namespace std;

int moveX[6] = { 0, 0, 1, -1, 0, 0 };
int moveY[6] = { 1, -1, 0, 0, 0, 0 };
int moveZ[6] = { 0, 0, 0, 0, 1, -1 };
int board[103][103][103];
int distan[103][103][103];


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int m, n, h;
	queue<tuple<int, int, int>> Q;
	cin >> m >> n >> h;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> board[j][k][i];
				if (board[j][k][i] == 1)
					Q.push({ j, k, i });
				if (board[j][k][i] == 0)
					distan[j][k][i] = -1;
			}
		}
	}

	while (!Q.empty())
	{

		tuple<int, int, int>cur = Q.front();
		Q.pop();
		int curX, curY, curZ;
		tie(curX, curY, curZ) = cur;
		for (int dir = 0; dir < 6; dir++) {
			int nx = curX + moveX[dir];
			int ny = curY + moveY[dir];
			int nz = curZ + moveZ[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h)
				continue;
			if (distan[nx][ny][nz] >= 0)
				continue;
			distan[nx][ny][nz] = distan[curX][curY][curZ] + 1;
			Q.push({ nx,ny,nz });
		}
	}

	int ans = 0;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			for (int k = 0; k < m; k++)
			{ 
				if (distan[j][k][i] == -1)
				{
					cout << -1 << '\n';
					return 0;
				}
				ans = max(ans, distan[j][k][i]);
			}
		}
	}
		
	cout << ans << "\n";
	return 0;
}