// 0x05. 스택
// Written by : Rylah
// Date : 2022.02.02
// 10828. 스택 
// https://www.acmicpc.net/problem/10828
// https://www.acmicpc.net/source/38460407
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) {
	dat[pos++] = x;
}

void pop() {
	if (pos != 0)
		pos--;
}

int top() {
	return dat[pos - 1];
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
			int input;
			cin >> input;
			push(input);
		}
		else if (cmd == "pop")
		{
			if (pos != 0)
			{
				cout << top() << "\n";
				pop();
			}
			else
				cout << -1 << "\n";
		}
		else if (cmd == "size")
		{
			cout << pos << "\n";
		}
		else if (cmd == "empty")
		{
			if (pos != 0)
				cout << 0 << "\n";
			else
				cout << 1 << "\n";
		}
		else if (cmd == "top")
		{
			if (pos != 0)
				cout << top() << "\n";
			else
				cout << -1 << "\n";
		}
	}
	return 0;
}
