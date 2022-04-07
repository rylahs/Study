#include <bits/stdc++.h>
using namespace std;

struct cmp
{
	bool operator()(const int &a, const int &b)
	{
		if (abs(a) == abs(b))
			return a > b;
		else
			return abs(a) > abs(b);
		
	}
};
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	priority_queue<int, vector<int>, cmp> pq;

	int n;
	cin >> n;

	while (n--)
	{
		int cmd;
		cin >> cmd;

		if (cmd == 0)
		{
			if (pq.empty())
			{
				cout << 0 << "\n";
				continue;
			}
			cout << pq.top() << "\n";
			pq.pop();
		}
		else
		{
			pq.emplace(cmd);
		}
	}



	return 0;
}