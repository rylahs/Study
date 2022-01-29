#include <bits/stdc++.h>
using namespace std;

int main_5397(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int testCase;
	cin >> testCase;

	for (int t = 0; t < testCase; t++)
	{
		string str1;
		cin >> str1;

		list<char> L = {};
		auto ptr = L.begin();
		for (auto e : str1)
		{
			switch (e)
			{
			case '<':
				if (ptr != L.begin())
					ptr--;
				break;
			case '>':
				if (ptr != L.end())
					ptr++;
				break;
			case '-':
				if (ptr != L.begin())
				{
					ptr--;
					ptr = L.erase(ptr);
				}
				break;
			default:
				L.insert(ptr, e);
				break;
			}
		}
		auto iter = L.begin();
		for (auto i = L.begin(); i != L.end(); i++)
			cout << *i;
		cout << '\n';
		
	}
	return 0;
}