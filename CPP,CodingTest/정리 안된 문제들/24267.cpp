#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	long long cnt = 0;
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k <= n; k++)
				cnt++;
		}
	}

	cout << cnt << "\n";
	cout << 3 << "\n";
	return 0;
}