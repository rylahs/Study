// 0x04. 연결 리스트
// Written by : Rylah
// Date : 2022.02.02
// 1406. 에디터 
// https://www.acmicpc.net/problem/1406
// https://www.acmicpc.net/source/38452027
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000004;
char dat[MAX];
int pre[MAX];
int nxt[MAX];
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

void traversal() {
	int cur = nxt[0];
	while (cur != -1)
	{
		cout << dat[cur];
		cur = nxt[cur];
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	fill(pre, pre + MAX, -1);
	fill(nxt, nxt + MAX, -1);

	string str;
	cin >> str;

	int cursor = 0;
	for (auto& e : str)
	{
		insert(cursor, e);
		cursor++;
	}

	int m;
	cin >> m;

	while (m--)
	{
		char com;
		cin >> com;

		if (com == 'L')
		{
			if (pre[cursor] != -1)
				cursor = pre[cursor];
		}
		else if (com == 'D')
		{
			if (nxt[cursor] != -1)
				cursor = nxt[cursor];
		}
		else if (com == 'B')
		{
			if (pre[cursor] != -1)
			{
				erase(cursor);
				cursor = pre[cursor];
			}

		}
		else if (com == 'P')
		{
			char input;
			cin >> input;
			insert(cursor, input);
			cursor = nxt[cursor];
		}
	}

	traversal();
	return 0;
}
