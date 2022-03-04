// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 1158
// https://www.acmicpc.net/problem/1158

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	queue<int> q;

	for (int i = 1; i <= n; i++)
		q.push(i);

	cout << "<";

	while (q.size() != 1)
	{
		for (int i = 1; i < k; i++)
		{
			q.push(q.front());
			q.pop();
		}

		cout << q.front() << ", ";
		q.pop();
	}

	cout << q.front() << ">";
	q.pop();

	return 0;
}