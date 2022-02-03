// 0x06. 덱
// Written by : Rylah
// Date : 2022.02.03
// 1021. 회전하는 큐
// https://www.acmicpc.net/problem/1021
// https://www.acmicpc.net/source/38483546

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	deque<int> DQ;
	for (int i = 1; i <= n; i++)
		DQ.emplace_back(i);

	int cnt = 0;
	while (m--)
	{
		int target;
		cin >> target;

		int idx = find(DQ.begin(), DQ.end(), target) - DQ.begin();

		while (DQ.front() != target)
		{
			if (idx < (int)DQ.size() - idx)
			{
				DQ.push_back(DQ.front());
				DQ.pop_front();
			}
			else
			{
				DQ.push_front(DQ.back());
				DQ.pop_back();
			}
			cnt++;
			
		}
		DQ.pop_front();
	}

	cout << cnt << "\n";

	return 0;
}
