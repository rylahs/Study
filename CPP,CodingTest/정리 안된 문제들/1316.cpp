#include <bits/stdc++.h>
using namespace std;

int main_1316(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int count = 0;
	while (n--)
	{
		vector<int> v(26, 0);
		string s;
		cin >> s;
		bool isTrue = true;
		for (int i = 0; i < s.size(); i++)
		{
			if (v[s[i] - 'a'] == 0)
			{
				v[s[i] - 'a']++;
			}
			else if (v[s[i]-'a'] != 0 && s[i - 1] == s[i] && i != 0)
				continue;
			else
			{
				isTrue = false;
			}
		}
		if (isTrue == true)
			count++;
	}

	cout << count;

	return 0;
}