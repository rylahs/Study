#include <bits/stdc++.h>
using namespace std;

int main_1065(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	
	int count = 0;
	for (int i = 1; i < n + 1; i++)
	{
		if (i > 0 && i < 100)
			count++;
		else if (i < 1000)
			if (i / 100 - (i % 100) / 10 == (i % 100) / 10 - ((i % 100) % 10))
				count++;
	}
	cout << count << '\n';
	return 0;
}