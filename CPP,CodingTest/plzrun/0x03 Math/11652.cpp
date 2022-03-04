// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.03
// 11652
// https://www.acmicpc.net/problem/11652

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	map<long long, int> num;

	for (int i = 0; i < n; i++)
	{
		long long input;
		cin >> input;
		num[input]++;
	}

	int mxCnt = -1;
	long long mxVal = -1;

	for (auto e = num.begin(); e != num.end(); e++)
	{
		if (e->second > mxCnt)
		{
			mxCnt = e->second;
			mxVal = e->first;
		}

	}

	cout << mxVal << "\n";
	return 0;
}