// 0x05. 스택
// Written by : Rylah
// Date : 2022.02.02
// 10773. 제로
// https://www.acmicpc.net/problem/10773
// https://www.acmicpc.net/source/38460553
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<int> s;
	int k;
	cin >> k;
	while (k--)
	{
		int a;
		cin >> a;
		if (a != 0)
			s.push(a);
		else
		{
			if (!s.empty())
				s.pop();
		}
	}
	int sum = 0;
	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}
	cout << sum << "\n";
	return 0;
}
