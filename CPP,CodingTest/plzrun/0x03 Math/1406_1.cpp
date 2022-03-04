// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 1406
// https://www.acmicpc.net/problem/1406

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	list<char> l;
	for (int i = 0; i < str.length(); i++)
	{
		l.push_back(str[i]);
	}
	auto curIdx = l.end();

	int n;
	cin >> n;

	while (n--)
	{
		char cmd;
		cin >> cmd;
		if (cmd == 'L')
		{
			if (curIdx != l.begin())
				curIdx--;
			else
				continue;
		}

		else if (cmd == 'D')
		{
			if (curIdx != l.end())
				curIdx++;
			else
				continue;
		}

		else if (cmd == 'B')
		{
			if (curIdx != l.begin())
			{
				curIdx--;
				curIdx = l.erase(curIdx);
			}
		}

		else if (cmd == 'P')
		{
			char input;
			cin >> input;
			l.insert(curIdx, input);
		}

	}

	for (auto e : l)
		cout << e;
	cout << "\n";

	return 0;
}