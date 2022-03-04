// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.03
// 9012
// https://www.acmicpc.net/problem/9012

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	while (n--)
	{
		string str;
		cin >> str;

		bool isValid = true;
		stack<char> st;

		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '(')
				st.push('(');
			else
			{
				if (st.empty() || st.top() != '(')
				{
					isValid = false;
					break;
				}
				else
				{
					st.pop();
				}
			}
		}
		if (!st.empty())
			isValid = false;
		if (!isValid)
			cout << "NO" << "\n";
		else
			cout << "YES" << "\n";
	}
	return 0;
}