// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.03
// 10799
// https://www.acmicpc.net/problem/10799

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	stack<char> st;
	int pipeNum = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
			st.push('(');
		else
		{
			if (str[i - 1] == '(') // Laser
			{
				st.pop();
				pipeNum += st.size();
			}
			else // pipe
			{
				pipeNum += 1;
				st.pop();
			}
		}
	}
	cout << pipeNum << "\n";


	return 0;
}