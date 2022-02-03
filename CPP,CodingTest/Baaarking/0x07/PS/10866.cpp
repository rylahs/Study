// 0x06. µ¦
// Written by : Rylah
// Date : 2022.02.03
// 10866. µ¦
// https://www.acmicpc.net/problem/10866
// https://www.acmicpc.net/source/38482833

#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	deque<int> DQ;
	int n;
	cin >> n;
	while (n--)
	{
		string cmd;
		cin >> cmd;
		if (cmd == "push_front")
		{
			int x;
			cin >> x;
			DQ.push_front(x);
		}
		else if (cmd == "push_back")
		{
			int x;
			cin >> x;
			DQ.push_back(x);
		}
		else if (cmd == "pop_front")
		{
			if (DQ.empty())
				cout << -1 << "\n";
			else
			{
				cout << DQ.front() << "\n";
				DQ.pop_front();
			}
		}
		else if (cmd == "pop_back")
		{
			if (DQ.empty())
				cout << -1 << "\n";
			else
			{
				cout << DQ.back() << "\n";
				DQ.pop_back();
			}
		}
		else if (cmd == "size")
			cout << DQ.size() << "\n";

		else if (cmd == "empty")
		{
			if (DQ.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}

		else if (cmd == "front")
		{
			if (DQ.empty())
				cout << -1 << "\n";
			else
				cout << DQ.front() << "\n";
		}
		
		else if (cmd == "back")
		{
			if (DQ.empty())
				cout << -1 << "\n";
			else
				cout << DQ.back() << "\n";
		}

	}

	return 0;
}