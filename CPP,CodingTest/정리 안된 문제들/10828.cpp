// BOJ 10828. Ω∫≈√
// https://www.acmicpc.net/problem/10828

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	stack<int> s;
	int n;
	cin >> n;
	while (n--)
	{
		string input;
		cin >> input;
		if (input == "push")
		{
			int a;
			cin >> a;
			s.push(a);
		}
		else if (input == "pop")
		{
			if (s.empty())
				cout << -1 << '\n';
			else
			{
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (input == "size")
			cout << s.size() << '\n';
		else if (input == "empty")
		{
			if (s.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (input == "top")
		{
			if (s.empty())
				cout << -1 << '\n';
			else
				cout << s.top() << '\n';
		}
	}

	return 0;
}
