#include <bits/stdc++.h>
using namespace std;
int n, s;
int arr[30];
int cnt = 0;
void func(int cur, int t) {
	if (cur == n)
	{
		if (t == s)
			cnt++;
		return;
	}
	func(cur + 1, t);
	func(cur + 1, t + arr[cur]);
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> s;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	func(0, 0);
	if (s == 0) cnt--;
	cout << cnt;

	return 0;
}