// 0x07. µ¦
// Written by : Rylah
// Date : 2022.02.03
// 10866. µ¦
// https://www.acmicpc.net/problem/10866
// https://www.acmicpc.net/source/38482937

#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000005;
int dat[2 * MAX + 1];
int head = MAX, tail = MAX;

void push_front(int x)
{
	dat[--head] = x;
}

void push_back(int x)
{
	dat[tail++] = x;
}

void pop_front()
{
	head++;
}

void pop_back()
{
	tail--;
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

		if (cmd == "push_front")
		{
			int x;
			cin >> x;
			push_front(x);
		}
		else if (cmd == "push_back")
		{
			int x;
			cin >> x;
			push_back(x);
		}
		else if (cmd == "pop_front")
		{
			if (head == tail)
				cout << -1 << "\n";
			else
			{
				cout << front() << "\n";
				pop_front();
			}
		}
		else if (cmd == "pop_back")
		{
			if (head == tail)
				cout << -1 << "\n";
			else
			{
				cout << back() << "\n";
				pop_back();
			}
		}
		else if (cmd == "size")
		{
			cout << tail - head << "\n";
		}
		else if (cmd == "empty")
		{
			if (tail - head == 0)
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
