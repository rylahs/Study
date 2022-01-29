// BOJ 2490. ¿∑≥Ó¿Ã
// https://www.acmicpc.net/problem/2490

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase = 3;
	vector<int> v;
	while (testCase--)
	{
		int input;
		v.clear();
		for (int i = 0; i < 4; i++)
		{
			cin >> input;
			v.emplace_back(input);
		}
		int oneCount = 0;
		for (auto e : v)
			if (e == 1)	oneCount++;

		switch (oneCount)
		{
		case 0:
			cout << 'D' << '\n';
			break;
		case 1:
			cout << 'C' << '\n';
			break;
		case 2:
			cout << 'B' << '\n';
			break;
		case 3:
			cout << 'A' << '\n';
			break;
		case 4:
			cout << 'E' << '\n';
			break;
		}
	}
	return 0;
}