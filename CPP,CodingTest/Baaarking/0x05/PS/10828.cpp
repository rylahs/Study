// 0x05. 스택
// Written by : Rylah
// Date : 2022.02.02
// 10828. 스택 
// https://www.acmicpc.net/problem/10828
// https://www.acmicpc.net/source/38459863
#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	stack<int> s;
	while (n--)
	{
		string cmd;
		cin >> cmd;
		if (cmd == "push")
		{
			int input;
			cin >> input;
			s.push(input);
		}
		else if (cmd == "pop")
		{
			if (!s.empty())
			{
				cout << s.top() << "\n";
				s.pop();
			}
			else
				cout << -1 << "\n";
		}
		else if (cmd == "size")
		{
			cout << s.size() << "\n";
		}
		else if (cmd == "empty")
		{
			if (s.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (cmd == "top")
		{
			if (!s.empty())
				cout << s.top() << "\n";
			else
				cout << -1 << "\n";
		}
	}

	return 0;
}
