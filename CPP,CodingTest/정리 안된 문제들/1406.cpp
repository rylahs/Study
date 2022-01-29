// BOJ 1406. ฟกต๐ลอ
// https://www.acmicpc.net/problem/1406

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	list<char> L;
	for (int i = 0; i < str.size(); i++)
		L.emplace_back(str[i]);
	auto curIdx = L.end();
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char input;
		cin >> input;
		switch (input)
		{
		case 'L':
			if (curIdx != L.begin())
				curIdx--;
			break;
		case 'D':
			if (curIdx != L.end())
				curIdx++;
			break;
		case 'B':
			if (curIdx != L.begin())
			{
				curIdx--;
				curIdx = L.erase(curIdx);
			}
			break;
		case 'P':
			char ch;
			cin >> ch;
			L.emplace(curIdx, ch);
			break;
		}
	}

	for (auto e : L)
		cout << e;

	return 0;
}