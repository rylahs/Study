#include <bits/stdc++.h>
using namespace std;

int main_2577(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b, c;
	vector<int> v(10, 0);
	cin >> a >> b >> c;
	int mult = a * b * c;
	while (mult != 0) 
	{
		v[mult % 10]++;
		mult /= 10;
	}

	for (int e : v)
		cout << e << '\n';
	return 0;
}
