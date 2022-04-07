#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int res;
	if (n % 2)
		res = 0;
	else
	{
		if ((n / 2) % 2)
			res = 1;
		else
			res = 2;
			
	}
	cout << res << "\n";

	return 0;
}