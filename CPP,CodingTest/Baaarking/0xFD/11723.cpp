// 0xFD. Practice
// Written by : Rylah
// Date : 2022.03.11
// 11723. С§Че
// https://www.acmicpc.net/problem/11723

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	set<int> s;
	int m;
	cin >> m;
	while (m--)
	{
		string cmd;
		cin >> cmd;

		if (cmd == "add")
		{
			int ins;
			cin >> ins;
			s.insert(ins);
		}

		if (cmd == "remove")
		{
			int ins;
			cin >> ins;
			
			auto iter = s.find(ins);
			if (iter != s.end())
				s.erase(ins);
		}

		if (cmd == "check")
		{
			int ins;
			cin >> ins;

			auto iter = s.find(ins);
			if (iter != s.end())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}

		if (cmd == "toggle")
		{
			int ins;
			cin >> ins;

			auto iter = s.find(ins);
			if (iter != s.end())
				s.erase(ins);
			else
				s.insert(ins);
		}

		if (cmd == "all")
		{
			for (int i = 1; i <= 20; i++)
				s.insert(i);
		}

		if (cmd == "empty")
			s.clear();
	}

	return 0;
}