// 0x06. ť 
// Written by : Rylah
// Date : 2022.02.02
// 10845. ť 
// https://www.acmicpc.net/problem/10845
// https://www.acmicpc.net/source/38477243
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000005;
int dat[MAX];
int head, tail;

void push(int x)
{
	dat[tail++] = x;
}

void pop()
{
	head++;
}

int front()
{
	return dat[head];
}

int back()
{
	return dat[tail - 1];
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;

	while (n--)
	{
		string cmd;
		cin >> cmd;

		if (cmd == "push")
		{
			int x;
			cin >> x;
			push(x);
		}
		else if (cmd == "pop")
		{
			if (tail == head)
				cout << -1 << "\n";
			else
			{
				cout << front() << "\n";
				pop();
			}
		}
		else if (cmd == "size")
		{
			cout << tail - head << "\n";
		}

		else if (cmd == "empty")
		{
			if (tail == head)
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}

		else if (cmd == "front")
		{
			if (tail == head)
				cout << -1 << "\n";
			else
				cout << front() << "\n";
		}

		else if (cmd == "back")
		{
			if (tail == head)
				cout << -1 << "\n";
			else
				cout << back() << "\n";
		}
	}
	return 0;
}
