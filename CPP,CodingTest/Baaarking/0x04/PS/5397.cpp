// 0x04. 연결 리스트
// Written by : Rylah
// Date : 2022.02.02
// 5397. 키 로거 
// https://www.acmicpc.net/problem/5397
// https://www.acmicpc.net/source/38456251
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
		string str;
		cin >> str;
		list<char> L;
		auto cursor = L.begin();

		for (int i = 0; i < (int)str.size(); i++)
		{
			if (str[i] == '<')
			{
				if (cursor != L.begin())
					cursor--;
				continue;
			}

			else if (str[i] == '>')
			{
				if (cursor != L.end())
					cursor++;
				continue;
			}

			else if (str[i] == '-')
			{
				if (cursor != L.begin())
				{
					cursor--;
					cursor = L.erase(cursor);
				}
			}
			else
			{
				L.insert(cursor, str[i]);
			}
		}
		for (auto& e : L)
			cout << e;
		cout << "\n";
	}
	return 0;
}
