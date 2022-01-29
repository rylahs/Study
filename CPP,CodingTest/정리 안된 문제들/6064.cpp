#include <bits/stdc++.h>
using namespace std;

int main_6064(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k;
	cin >> n >> k;
	int ret = 1;
	for (int i = 1; i <= n; i++) 
		ret *= i;
	for (int i = 1; i <= k; i++) 
		ret /= i;
	for (int i = 1; i <= n - k; i++)
		ret /= i;
	cout << ret;

	return 0;
}