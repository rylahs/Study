// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.17
// 1697. 숨바꼭질
// https://www.acmicpc.net/problem/1697

#include <bits/stdc++.h>
using namespace std;

int dist[100005];
int dx[3] = { -1, 1, 2 };
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	fill(dist, dist + 100001, -1);

	dist[n] = 0;
	queue<int> Q;
	Q.push(n);

	while (dist[k] == -1)
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

			if (nx < 0 || nx >= 100001)
				continue;
			if (dist[nx] >= 0)
				continue;

			dist[nx] = dist[cur] + 1;
			Q.push(nx);
		}
	}

	cout << dist[k] << "\n";
	return 0;
}