// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.03
// 10845
// https://www.acmicpc.net/problem/10845

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	queue<int> q;
	while (n--)
	{
		string cmd;
		cin >> cmd;

		if (cmd == "push")
		{
			int x;
			cin >> x;
			q.push(x);
		}

		else if (cmd == "pop")
		{
			if (q.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			else
			{
				cout << q.front() << "\n";
				q.pop();
			}
		}

		else if (cmd == "size")
			cout << q.size() << "\n";

		else if (cmd == "empty")
		{
			if (q.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		
		else if (cmd == "front")
		{
			if (q.empty())
				cout << -1 << "\n";
			else
				cout << q.front() << "\n";
		}

		else
		{
			if (q.empty())
				cout << -1 << "\n";
			else
				cout << q.back() << "\n";
		}

	}


	return 0;
}