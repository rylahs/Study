#include <bits/stdc++.h>
using namespace std;

int main_1110(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int origin = n;
	int count = 0;
	while (1) 
	{
		int temp = (n / 10) + (n % 10);
		n = (n % 10) * 10 + (temp % 10);
		count++;
		if (origin == n)
			break;
	}
	cout << count;

	return 0;
}