// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.07
// 1697. 숨바꼭질 
// https://www.acmicpc.net/problem/1697
// https://www.acmicpc.net/source/38675287

#include <bits/stdc++.h>
using namespace std;

int n, k;
int board[200005];

int dx[3] = { -1, 1, 2 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> k;

	fill(board, board + 200000, -1);

	board[n] = 0;
	queue<int> Q;
	Q.push(n);

	while (board[k] == -1) // 동생을 찾을 때 까지
	{
		int cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 3; dir++)
		{
			int nx = 0;
			if (dir == 2)
				nx = cur * dx[dir];
			else
				nx = cur + dx[dir];

			if (nx < 0 || nx > 200000)
				continue;
			if (board[nx] >= 0)
				continue;

			board[nx] = board[cur] + 1;
			Q.push(nx);
		}
	}

	cout << board[k] << "\n";

	return 0;
}
