#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int a= -1, b = -1;

	while (true)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		int res = a + b;
		cout << res << "\n";
	}

	return 0;
}