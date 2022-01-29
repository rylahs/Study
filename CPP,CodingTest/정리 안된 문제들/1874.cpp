#include <bits/stdc++.h>
using namespace std;

int main_1874()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	stack<int> s;
	string str = "";
	int idx = 0;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;

		while (idx < input)
		{
			s.push(++idx);
			str.append("+");
		}

		if (s.top() != input) {
			cout << "NO";
			return 0;
		}

		s.pop();
		str.append("-");
	}
	for (int i = 0; i < str.size(); i++)
		cout << str[i] << '\n';

	return 0;
}