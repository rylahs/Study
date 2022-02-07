// 0x09. BFS
// Written by : Rylah
// Date : 2022.02.07
// 5014. 스타트링크
// https://www.acmicpc.net/problem/5014
// https://www.acmicpc.net/source/38730483

#include <bits/stdc++.h>
using namespace std;

int board[1000002];
int F, S, G, U, D;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> F >> S >> G >> U >> D;
	vector<int> dx = { U, (D * -1) };
	fill(board, board + F + 1, -1);

	board[S] = 0;
	queue<int> Q;
	Q.push(S);

	while (!Q.empty() && board[G] == -1)
	{
		int cur = Q.front();
		Q.pop();
		for (int dir = 0; dir < 2; dir++)
		{
			int nx = cur + dx[dir];

			if (nx < 1 || nx > F)
				continue;
			if (board[nx] != -1)
				continue;

			board[nx] = board[cur] + 1;
			Q.push(nx);
		}
	}

	if (board[G] == -1)
		cout << "use the stairs\n";
	else
		cout << board[G] << "\n";
	return 0;
}