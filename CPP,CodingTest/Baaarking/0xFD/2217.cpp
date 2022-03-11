// 0x11. Greedy
// Written by : Rylah
// Date : 2022.02.23
// 2217. 로프
// https://www.acmicpc.net/source/39485966

#include <bits/stdc++.h>
using namespace std;

int gr[100005];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> gr[i];

	sort(gr, gr + n);

	int ans = 0;
	for (int i = 1; i <= n; i++)
		ans = max(ans, gr[n - i] * i);

	for (int i = 1; i <= n; i++)
		cout << gr[n - i] * i << "\n";
	cout << ans << "\n";
	return 0;
}