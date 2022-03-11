// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.17
// 5014. 스타트링크
// https://www.acmicpc.net/problem/5014

#include <bits/stdc++.h>
using namespace std;

int building[1000005];
int dx[2];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int F, S, G, U, D;
	cin >> F >> S >> G >> U >> D;
	dx[0] = U; dx[1] = -1 * D;

	fill(building, building + F + 1, -1);
	building[0] = 0;
	building[S] = 0;
	queue<int> Q;
	Q.push(S);

	while (!Q.empty() && building[G] == -1)
	{
		int cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 2; dir++)
		{
			int nx = cur + dx[dir];

			if (nx <= 0 || nx >= F + 1)
				continue;

			if (building[nx] >= 0)
				continue;
			building[nx] = building[cur] + 1;
			Q.push(nx);
		}
	}

	if (building[G] == -1)
		cout << "use the stairs\n";
	else
		cout << building[G] << "\n";

	return 0;
}