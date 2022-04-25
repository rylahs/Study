#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	priority_queue<int, vector<int>, less<int>> pq;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int a;
			cin >> a;
			pq.emplace(-a);
			if (pq.size() > n)
				pq.pop();
		}
	}
	cout << -pq.top() << "\n";

	return 0;
}