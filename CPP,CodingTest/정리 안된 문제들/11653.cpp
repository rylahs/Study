#include <bits/stdc++.h>
using namespace std;

int main_11653(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int div = 2;
	while (n != 1)
	{
		if (n % div == 0)
		{
			cout << div << '\n';
			n /= div;
		}
		else
		{
			div++;
		}
		
	}

	return 0;
}