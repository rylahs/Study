#include <bits/stdc++.h>
using namespace std;
int a[100001];
bool b[2000001];

int main_3273()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, target;
	cin >> n;
	int result = 0;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> target;
	for (int i = 0; i < n; i++) {
		if ((target - a[i] > 0) && (b[target - a[i]] == true))
			result++;
		b[a[i]] = true;
	}
	cout << result;
	return 0;
}