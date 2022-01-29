#include <bits/stdc++.h>
using namespace std;

int main_23881(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.emplace_back(a);
	}
	int count = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		int max = 0;
		int maxIdx = 0;
		for (int j = 0; j <= i; j++)
		{
			if (v[j] > max) {
				max = v[j];
				maxIdx = j;
			}
		}
		if (i != maxIdx && max != v[i])
		{
			swap(v[i], v[maxIdx]);
			count++;
		}
		else {
			continue;
		}

		if (count == k)
		{
			cout << v[maxIdx] << " " << v[i];
			break;
		}
	}
	if (count < k)
		cout << -1 << '\n';
	return 0;
}