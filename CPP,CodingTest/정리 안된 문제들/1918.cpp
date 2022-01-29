// BOJ 1918. 후위 표기식
// https://www.acmicpc.net/problem/1918

#include <bits/stdc++.h>
using namespace std;

int priorityChar(char c)
{
	if (c == '(')
		return 0;
	else if (c == '+' || c == '-')
		return 1;
	else if (c == '*' || c == '/')
		return 2;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	stack<char> calcStack;
	string inputCalcStr;
	cin >> inputCalcStr;

	for (int i = 0; i < inputCalcStr.size(); i++)
	{
		char c = inputCalcStr[i];
		if (c >= 'A' && c <= 'Z')
			cout << c;
		else if (c == '(')
			calcStack.push(c);
		else if (c == ')')
		{
			while (calcStack.top() != '(')
			{
				cout << calcStack.top();
				calcStack.pop();
			}
			calcStack.pop(); // '(' pop();
		}
		else
		{
			while (!calcStack.empty() && priorityChar(calcStack.top()) >= priorityChar(c))
			{
				cout << calcStack.top();
				calcStack.pop();
			}
			calcStack.push(c);
		}
	}

	while (!calcStack.empty())
	{
		cout << calcStack.top();
		calcStack.pop();
	}
	return 0;
}