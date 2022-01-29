#include <bits/stdc++.h>
using namespace std;

int main_2164(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	deque<int> d;
	for (int i = 0; i < n; i++)
		d.emplace_back(i + 1);

	while (d.size() != 1)
	{
		d.pop_front();
		d.emplace_back(d.front());
		d.pop_front();
	}
	cout << d[0];
	return 0;
}