#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	priority_queue<int, vector<int>, greater<int>> pq;

	int n;
	cin >> n;
	while (n--)
	{
		int cmd;
		cin >> cmd;

		if (cmd == 0)
		{
			if (pq.empty())
				cout << 0 << "\n";
			else
			{
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else
		{
			pq.emplace(cmd);
		}

	}

	return 0;
}