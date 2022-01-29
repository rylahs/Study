#include <bits/stdc++.h>
using namespace std;

int main_1406(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string initStr;
	cin >> initStr;
	
	list<char> L;
	for (int i = 0; i < initStr.size(); i++)
		L.emplace_back(initStr[i]);
	auto curPtr = L.end();

	int orderNum;
	cin >> orderNum;
	
	for (int i = 0; i < orderNum; i++)
	{
		char orderCommand, ch;
		cin >> orderCommand;
		switch (orderCommand)
		{
		case 'L':
			if (curPtr != L.begin())
				curPtr--;
			break;
		case 'D':
			if (curPtr != L.end())
				curPtr++;
			break;
		case 'B':
			if (curPtr != L.begin())
			{
				curPtr--;
				curPtr = L.erase(curPtr);
			}
			break;
		case 'P':
			cin >> ch;
			L.emplace(curPtr, ch);
			break;
		}
	}
	for (auto e : L)
		cout << e;

	return 0;
}