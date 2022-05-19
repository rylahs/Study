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
		bool isAnagram = true;
		string a, b;
		cin >> a >> b;

		if (a.length() != b.length())
			isAnagram = false;
		else
		{
			vector<int> alpha(26, 0);

			for (int i = 0; i < a.length(); i++)
				alpha[a[i] - 'a']++;

			for (int i = 0; i < b.length(); i++)
			{
				alpha[b[i] - 'a']--;
				if (alpha[b[i] - 'a'] < 0)
				{
					isAnagram = false;
					break;
				}
			}
		}
	
		
		if (isAnagram)
			cout << a << " & " << b << " are anagrams.\n";
		else
			cout << a << " & " << b << " are NOT anagrams.\n";
	}

	return 0;
}