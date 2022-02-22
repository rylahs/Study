#include <bits/stdc++.h>
using namespace std;

int st[50];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	st[1] = 1;
	st[2] = 2;
	for (int i = 3; i <= n; i++)
		st[i] = st[i - 1] + st[i - 2];

	cout << st[n] << "\n";


	return 0;
}