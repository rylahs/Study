// BOJ 10773. Á¦·Î
// https://www.acmicpc.net/problem/10773

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	stack<int> s;
	while (n--)
	{
		int input;
		cin >> input;
		
		if (input == 0 && s.empty())
			continue;
		else if (input == 0)
			s.pop();
		else
			s.push(input);
	}
	int sum = 0;
	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}
	cout << sum << '\n';
	return 0;
}
