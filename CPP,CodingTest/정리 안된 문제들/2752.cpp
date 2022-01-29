#include <bits/stdc++.h>
using namespace std;

int main_2752(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int x, y, z;
	cin >> x >> y >> z;
	int d, e;
	int f = 0;
	d = min({ x, y, z });
	e = max({ x, y, z });
	f = x + y + z - d - e;
	cout << d << " " << f << " " << e;
	return 0;
}