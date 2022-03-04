// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 1406
// https://www.acmicpc.net/problem/1406

#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;

char dat[MX];
int pre[MX];
int nxt[MX];
int unused = 1;

void insert(int addr, int num)
{
	dat[unused] = num;
	pre[unused] = addr;
	nxt[unused] = nxt[addr];

	if (nxt[addr] != -1)
		pre[nxt[addr]] = unused;

	nxt[addr] = unused;

	unused++;

}

void erase(int addr)
{
	nxt[pre[addr]] = nxt[addr];
	
	if (nxt[addr] != -1)
		pre[nxt[addr]] = pre[addr];
}

void traverse()
{
	int cur = nxt[0];

	while (cur != -1)
	{
		cout << dat[cur];
		cur = nxt[cur];
	}

	cout << "\n\n";

}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	fill(pre, pre + MX, -1);
	fill(nxt, nxt + MX, -1);

	string str;
	cin >> str;
	int curIdx = 0;
	for (auto c : str)
	{
		insert(curIdx, c);
		curIdx++;
	}

	int n;
	cin >> n;
	while (n--)
	{
		char cmd;
		cin >> cmd;

		if (cmd == 'L')
		{
			if (pre[curIdx] != -1)
				curIdx = pre[curIdx];
		}
		else if (cmd == 'D')
		{
			if (nxt[curIdx] != -1)
				curIdx = nxt[curIdx];
		}
		else if (cmd == 'B')
		{
			if (curIdx != 0)
			{
				erase(curIdx);
				curIdx = pre[curIdx];
			}
		}

		else
		{
			char x;
			cin >> x;
			insert(curIdx, x);
			curIdx = nxt[curIdx];
		}
	}
	traverse();
	return 0;
}