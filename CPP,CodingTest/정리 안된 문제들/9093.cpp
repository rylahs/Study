#include <bits/stdc++.h>
using namespace std;

int main_9003(void)
{

	int testCase;
	cin >> testCase;
	string str;
	getline(cin, str);
	while (testCase--)
	{
		
		getline(cin, str);
		auto a = str.begin();
		auto b = str.begin();
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ')
			{
				reverse(a, b);
				b++;
				a = b;
				continue;
			}
			else {
				b++;
			}
				
		}
		reverse(a, b);
		cout << str << '\n';
	}
	return 0;
}