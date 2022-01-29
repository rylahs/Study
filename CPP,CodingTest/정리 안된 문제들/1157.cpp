#include <bits/stdc++.h>
using namespace std;
string capitalizeString(string &s)
{
	transform(s.begin(), s.end(), s.begin(),
		[](unsigned char c) { return toupper(c); });
	return s;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;
	capitalizeString(str);
	vector<int> v(26, 0);
	for (int i = 0; i < str.size(); i++)
		v[str[i] - 'A']++;
	int max = -1;
	int maxIdx = -1;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > max)
		{
			max = v[i];
			maxIdx = i;
		}
	}
	int maxCount = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (max == v[i])
			maxCount++;
	}
	if (maxCount > 1)
		cout << "?";
	else
		cout << char(maxIdx + 'A');

	


	return 0;
}