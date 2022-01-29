#include <bits/stdc++.h>
using namespace std;

int hide[100002];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	fill(hide, hide + 100001, -1);
	hide[n] = 0;
	queue<int> q;
	q.push(n);
	while (hide[k] == -1)
	{
		int cur = q.front();
		q.pop();

		for (int next : {cur - 1, cur + 1, 2 * cur}) {
			if (next < 0 || next > 100000)
				continue;
			if (hide[next] != -1)
				continue;
			hide[next] = hide[cur] + 1;
			q.push(next);
		}
	}

	std::cout << hide[k];
	return 0;
}