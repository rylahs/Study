#include <bits/stdc++.h>
using namespace std;

int s1[26], s2[26];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str1, str2;
	cin >> str1 >> str2;
	
	for (int i = 0; i < str1.size(); i++)
		s1[str1[i] - 'a']++;

	for (int i = 0; i < str2.size(); i++)
		s2[str2[i] - 'a']++;

	int subSum = 0;
	for (int i = 0; i < 26; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else 
			subSum += abs(s1[i] - s2[i]);
	}

	cout << subSum;


	return 0;
}