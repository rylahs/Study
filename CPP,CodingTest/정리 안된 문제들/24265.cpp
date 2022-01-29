#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	long long cnt = 0;
	for (int i = 1; i < n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			cnt++;
		}
	}

	cout << cnt << "\n";
	cout << 2 << "\n";
	return 0;
}