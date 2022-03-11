// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 11024. 더하기 4
// 

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	cin.ignore();
	while (testCase--)
	{
		string str;
		getline(cin, str);
		
		string tmp = "";
		int sum = 0;

		for (int i = 0; i < str.length(); i++)
		{
			tmp += str[i];
			if (str[i] == ' ' || i == str.length() - 1)
			{
				sum += stoi(tmp);
				tmp = "";
			}
		}
		cout << sum << "\n";
	}

	return 0;
}