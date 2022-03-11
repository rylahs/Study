// 0xFE. Etc
// Written by : Rylah
// Date : 2022.02.17
// 10820. 문자열 분석
// 

#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	for (int i = 0; i < 100; i++)
	{
		string str;
		getline(cin, str);

		if (str.length() == 0)
			break;
		int lower = 0, upper = 0, num = 0, space = 0;

		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				lower++;
			else if (str[j] >= 'A' && str[j] <= 'Z')
				upper++;
			else if (str[j] >= '0' && str[j] <= '9')
				num++;
			else if (str[j] == ' ')
				space++;
		}

		cout << lower << " " << upper << " " << num << " " << space << "\n";
	}
	return 0;
}