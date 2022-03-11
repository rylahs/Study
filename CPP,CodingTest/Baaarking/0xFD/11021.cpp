// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.20
// 11021. A + B - 7
// 

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int testCase;
	cin >> testCase;

	for (int t = 1; t <= testCase; t++)
	{
		int x, y;
		cin >> x >> y;

		cout << "Case #" << t << ": " << x + y << "\n";
	}
	return 0;
}