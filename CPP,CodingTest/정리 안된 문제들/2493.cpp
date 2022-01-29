// BOJ 2493. 탑
// https://www.acmicpc.net/problem/2493

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	stack<pair<int, int>> tower;
	tower.push({ 100000001,0 }); // 0번 타워

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int high;
		cin >> high;
		while (tower.top().first < high)
			tower.pop();
		cout << tower.top().second << " ";
		tower.push({ high, i });
	}
	return 0;
}
