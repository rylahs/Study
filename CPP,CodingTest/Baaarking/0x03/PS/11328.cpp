// 0x03. 배열
// Written by : Rylah
// Date : 2022.01.31
// 13328. Strfry
// https://www.acmicpc.net/problem/13328
// https://www.acmicpc.net/source/38383081

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
		string str1, str2;
		cin >> str1 >> str2;
		sort(str1.begin(), str1.end());
		sort(str2.begin(), str2.end());
		if (str1 == str2)
			cout << "Possible" << "\n";
		else
			cout << "Impossible" << "\n";
	}
	return 0;
}