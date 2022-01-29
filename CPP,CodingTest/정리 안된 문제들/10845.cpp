#include <bits/stdc++.h>
using namespace std;

int main_10845(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	queue<int> q;

	int n;
	cin >> n;
	while (n--)
	{
		string command;
		cin >> command;
		if (command == "push")
		{
			int input;
			cin >> input;
			q.push(input);
		}
		if (command == "pop")
		{
			if (!q.empty())
			{
				cout << q.front() << '\n';
				q.pop();
			}
			else
				cout << -1 << '\n';
		}
		
		if (command == "size")
			cout << q.size() << '\n';
		
		if (command == "empty")
		{
			if (q.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}

		if (command == "front")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.front() << '\n';
		}
		if (command == "back")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.back() << '\n';
		}
			
	}

	return 0;
}