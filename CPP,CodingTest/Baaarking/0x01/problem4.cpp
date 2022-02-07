// Time Complexity : O(logN)

#include <bits/stdc++.h>
using namespace std;

int func4(int n) {
	int i = 1;
	while (i * 2 <= n)
		i *= 2;
	return i;
	/*
	while(1)
	{
		if (i >= n)
		{
			i /= 2;
			return i;
		}

		i *= 2;
	}
	*/
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cout << func4(5) << "\n";
	cout << func4(92615282) << "\n";
	cout << func4(1024) << "\n";
	return 0;
}