// BOJ 1874. 스택 수열
// https://www.acmicpc.net/problem/1874

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	stack<int> s;
	int idx = 0;
	string str = "";
	while (n--)
	{
		int input;
		cin >> input;
		while (idx < input)
		{
			s.push(++idx);
			str += "+";;
		}

		if (s.top() != input)
		{
			cout << "NO" << '\n';
			return 0;
		}

		s.pop();
		str += "-";
	}

	for (auto e : str)
		cout << e << '\n';
	return 0;
}
