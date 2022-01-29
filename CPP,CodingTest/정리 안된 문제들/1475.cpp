#include <bits/stdc++.h>
using namespace std;

int main_1475(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int input;
	cin >> input;
	vector<int> v(10, 0);

	while (input != 0)
	{
		v[input % 10]++;
		input /= 10;
	}

	int maxResult = 1;
	
	for (int i = 0; i < v.size(); i++)
	{
		if (i == 6 || i == 9)
			continue;
		if (maxResult < v[i])
		{
			maxResult = v[i];
		}
	}
	maxResult = max( ((v[6] + v[9] + 1) / 2), maxResult);
	cout << maxResult;
	
	return 0;
}
/*
int main_1475(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int input;
	cin >> input;

	vector<int> v(10, 0);
	while (input != 0)
	{
		v[input % 10]++;

		input /= 10;
	}

	int ans = 1;
	for (int i = 0; i < v.size(); i++)
	{
		if (i == 6 || i == 9)
			continue;
		if (ans < v[i])
			ans = max(v[i], ans);	
	}
	ans = max((v[6] + v[9] + 1) / 2, ans);
	cout << ans;



	return 0;
}
*/