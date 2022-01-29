#include <bits/stdc++.h>
using namespace std;

int main_11652(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	map<long long, int> numPairs;
	map<long long, int>::iterator e;

	for (int i = 0; i < n; i++)
	{
		long long input;
		cin >> input;
		numPairs[input]++;
	}
	int max = -1;
	long long maxNum = -1;
	for (e = numPairs.begin(); e != numPairs.end(); e++)
	{
		if (e->second > max)
		{
			max = e->second;
			maxNum = e->first;
		}
	}

	cout << maxNum;
	
	return 0;
}