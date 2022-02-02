// 0x05. 스택
// Written by : Rylah
// Date : 2022.02.02
// 1874. 스택 수열
// https://www.acmicpc.net/problem/1874
// 
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	stack<int> s;
	int cnt = 1;
	string answer;
	while (n--)
	{
		int a;
		cin >> a;

		while (cnt <= a)
		{
			s.push(cnt++);
			answer += "+\n";
		}

		if (s.top() != a)
		{
			cout << "NO\n";
			return 0;
		}
		s.pop();
		answer += "-\n";
	}
	cout << answer;
	return 0;
}
