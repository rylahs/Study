// 0xFD. Practice
// Written by : Rylah
// Date : 2022.03.07
// 1085
// 

#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int minDistance = 1001;
	minDistance = min(minDistance, abs(x - 0));
	minDistance = min(minDistance, abs(x - w));
	minDistance = min(minDistance, abs(y - 0));
	minDistance = min(minDistance, abs(y - h));

	cout << minDistance << "\n";

	return 0;
}