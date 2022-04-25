#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;
	
	for (int i = 0; i < testCase; i++)
	{
		vector<int> v(2, 0);
		for (int i = 0; i < 9; i++)
		{
			int yonsei, korea;
			cin >> yonsei >> korea;
			v[0] += yonsei;
			v[1] += korea;
		}

		if (v[0] > v[1])
			cout << "Yonsei" << "\n";
		else if (v[0] < v[1])
			cout << "Korea" << "\n";
		else
			cout << "Draw" << "\n";

	}

	return 0;
}