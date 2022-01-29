#include <bits/stdc++.h>
using namespace std;
string strarr[51];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> strarr[i];
	
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < strarr[i].size(); j++)
		{
			if (strarr[0][j] != strarr[i][j])
			{
				strarr[0][j] = '?';
			}
		}
	}
	cout << strarr[0] << '\n';
	
	return 0;
}