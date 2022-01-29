#include <bits/stdc++.h>
using namespace std;

int main_1021(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	deque<int> dq;
	int n, m, a = 1;
	cin >> n >> m;
	
	for (int i = 0; i < n; i++)
		dq.emplace_back(i + 1);
	
	int count = 0;
	while (m--)
	{
		int target;
		cin >> target;

		int idx = find(dq.begin(), dq.end(), target) - dq.begin();

		while (dq.front() != target)
		{
			if (idx < (int)dq.size() - idx)
			{
				dq.push_back(dq.front());
				dq.pop_front();
			} 
			else
			{
				dq.push_front(dq.back());
				dq.pop_back();
			}
			count++;
		}
		dq.pop_front();
	}
	cout << count;


	return 0;
}