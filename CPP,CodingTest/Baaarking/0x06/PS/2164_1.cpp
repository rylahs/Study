// 0x06. 큐
// Written by : Rylah
// Date : 2022.02.02
// 2164. 카드2
// https://www.acmicpc.net/problem/2164
// https://www.acmicpc.net/source/38478557

// N의 범위가 500,000 이지만 큐의 특성상 연산이 반복되므로 2배는 되어야 한다.

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
	
	for (int i = 1; i <= n; i++)
		push(i);

	while (tail - head != 1)
	{
		pop();
		push(front());
		pop();
	}

	cout << front() << "\n";
	return 0;
}