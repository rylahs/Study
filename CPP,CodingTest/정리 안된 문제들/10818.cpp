#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int mi = 1000001;
	int ma = -1000001;
	while (n--)
	{
		int a;
		cin >> a;
		mi = min(mi, a);
		ma = max(ma, a);
	}
	cout << mi << " " << ma << '\n';
	return 0;
}
