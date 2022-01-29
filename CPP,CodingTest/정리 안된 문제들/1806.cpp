// BOJ 1806. ºÎºÐÇÕ
// https://www.acmicpc.net/problem/1806

#include <bits/stdc++.h>
using namespace std;
int v[100001];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, targetSum;
	cin >> n >> targetSum;
	for (int i = 0; i < n; i++)
		cin >> v[i];
	int sum = v[0];
	int startPt = 0;
	int endPt = 0;
	int interval = 987654321;
	while (startPt <= endPt && endPt < n)
	{
		if (sum < targetSum)
			sum += v[++endPt];
		else if (sum == targetSum)
		{
			interval = min(interval, (endPt - startPt + 1));
			sum += v[++endPt];
		}
		else if (sum > targetSum)
		{
			interval = min(interval, (endPt - startPt + 1));
			sum -= v[startPt++];
		}
	}

	if (interval == 987654321)
		cout << 0 << '\n';
	else
		cout << interval << '\n';
	return 0;
}
