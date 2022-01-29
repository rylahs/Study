#include <bits/stdc++.h>
using namespace std;

int main_2941(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;
	int count = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (i == str.size() - 1)
		{
			count++;
			continue;
		}
		if (str[i] == 'c')
		{
			if (str[i + 1] == '=') {
				count++;
				i++;
				continue;
			}
			else if (str[i + 1] == '-') {
				count++;
				i++;
				continue;
			}
			else {
				count++;
				continue;
			}
		}
		if (str[i] == 'd')
		{
			if (str[i + 1] == 'z') {
				if (i + 2 > str.size() - 1)
				{
					count++;
					continue;
				}
				if (str[i + 2] == '=')
				{
					count++;
					i += 2;
					continue;
				}
				else
				{
					count++;
					continue;
				}
			}
			else if (str[i + 1] == '-') {
				count++;
				i++;
				continue;
			}
			else {
				count++;
				continue;
			}
		}
		if (str[i] == 'l')
		{
			if (str[i + 1] == 'j') {
				count++;
				i++;
				continue;
			}
			else {
				count++;
				continue;
			}
		}
		if (str[i] == 'n')
		{
			if (str[i + 1] == 'j') {
				count++;
				i++;
				continue;
			}
			else {
				count++;
				continue;
			}
		}
		if (str[i] == 's')
		{
			if (str[i + 1] == '=') {
				count++;
				i++;
				continue;
			}
			else {
				count++;
				continue;
			}
		}
		if (str[i] == 'z')
		{
			if (str[i + 1] == '=') {
				count++;
				i++;
				continue;
			}
			else {
				count++;
				continue;
			}
		}
		count++;
	}
	cout << count;
	return 0;
}