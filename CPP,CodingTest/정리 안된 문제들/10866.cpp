#include <bits/stdc++.h>
using namespace std;

int main_10866(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	deque<int> d;
	int n;
	cin >> n;

	while (n--)
	{
		string cmd;
		int x;
		cin >> cmd;
		if (cmd == "push_front")
		{
			cin >> x;
			d.push_front(x);
		}
		if (cmd == "push_back")
		{
			cin >> x;
			d.push_back(x);
		}
		if (cmd == "pop_front")
		{
			if (d.empty())
				cout << -1 << '\n';
			else {
				cout << d.front() << '\n';
				d.pop_front();
			}
		}
		if (cmd == "pop_back")
		{
			if (d.empty())
				cout << -1 << '\n';
			else {
				cout << d.back() << '\n';
				d.pop_back();
			}
		}
		if (cmd == "size")
			cout << d.size() << '\n';
		if (cmd == "empty")
		{
			if (d.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		if (cmd == "front")
		{
			if (d.empty())
				cout << -1 << '\n';
			else
				cout << d.front() << '\n';
		}
		if (cmd == "back")
		{
			if (d.empty())
				cout << -1 << '\n';
			else
				cout << d.back() << '\n';
		}
	}


	return 0;
}