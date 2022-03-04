// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 10820
// https://www.acmicpc.net/problem/10820

#include <bits/stdc++.h>
using namespace std;

int arr[4];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while (!cin.eof())
	{
		fill(arr, arr + 4, 0);
		string str;
		getline(cin, str);

		if (str.length() == 0)
			break;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				arr[0]++;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				arr[1]++;
			else if (str[i] >= '0' && str[i] <= '9')
				arr[2]++;
			else if (str[i] == ' ')
				arr[3]++;
		}

		for (int i = 0; i < 4; i++)
			cout << arr[i] << " ";
		cout << "\n";

	}

	return 0;
}