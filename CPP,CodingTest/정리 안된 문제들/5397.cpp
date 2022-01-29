// BOJ 5397. Å°·Î°Å
// https://www.acmicpc.net/problem/5397

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int testCase;
	cin >> testCase;
	while (testCase--)
	{
		string inputStr;
		cin >> inputStr;

		list<char> L;
		auto curPtr = L.end();
		for (int i = 0; i < inputStr.size(); i++)
		{
			switch (inputStr[i])
			{
			case '<':
				if (curPtr != L.begin())
					curPtr--;
				break;
			case '>':
				if (curPtr != L.end())
					curPtr++;
				break;
			case '-':
				if (curPtr != L.begin())
				{
					curPtr--;
					curPtr = L.erase(curPtr);
				}
				break;
			default:
				L.insert(curPtr, inputStr[i]);
				break;
			}
		}
		for (auto& e : L)
			cout << e;
		cout << '\n';
	}


	return 0;
}