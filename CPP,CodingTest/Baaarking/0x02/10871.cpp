// BOJ 10871. X보다 작은 수
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, x;
	cin >> n >> x;
	vector<int> ans;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a < x)
			ans.emplace_back(a);
	}
	for (auto e : ans)
		cout << e << " ";
	cout << "\n";
	return 0;
}