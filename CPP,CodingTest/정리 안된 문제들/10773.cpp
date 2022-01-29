#include <bits/stdc++.h>
using namespace std;

int main_10773(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	stack<int> s;
	int com;
	for (int i = 0; i < n; i++)
	{
		cin >> com;
		if (com != 0)
			s.push(com);
		else
			s.pop();
	}
	int sum = 0;
	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}
	cout << sum;

	return 0;
}