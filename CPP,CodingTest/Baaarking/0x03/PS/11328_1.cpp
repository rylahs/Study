// 0x03. 배열
// Written by : Rylah
// Date : 2022.01.31
// 13328. Strfry
// https://www.acmicpc.net/problem/13328
// https://www.acmicpc.net/source/38383059

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
		int alpha[26] = { 0, };
		string str1, str2;
		cin >> str1 >> str2;
		
		for (int i = 0; i < (int)str1.size(); i++)
			alpha[str1[i] - 'a']++;
		for (int i = 0; i < (int)str2.size(); i++)
			alpha[str2[i] - 'a']--;

		bool isZero = true;
		for (int i = 0; i < 26; i++)
		{
			if (alpha[i] != 0)
			{
				isZero = false;
				break;
			}
		}
		if (isZero == true)
			cout << "Possible" << "\n";
		else
			cout << "Impossible" << "\n";
	}
	return 0;
}