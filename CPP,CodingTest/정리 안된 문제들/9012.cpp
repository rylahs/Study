#include <bits/stdc++.h>
using namespace std;

int main_9012(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;
	for (int t = 0; t < testCase; t++)
	{
		stack<char> s;
		string str;
		bool isEmpty = true;
		cin >> str;
		for (int i = 0; i < str.size(); i++)
		{
			if (s.empty() && str[i] == ')')
			{
				isEmpty = false;
				break;
			}
			if (str[i] == '(')
				s.push(str[i]);
			if (str[i] == ')')
			{
				if (s.top() == '(')
					s.pop();
			}
		}

		if (isEmpty == false || !(s.empty()))
			cout << "NO" << '\n';
		else
			cout << "YES" << '\n';

	}
	return 0;
}