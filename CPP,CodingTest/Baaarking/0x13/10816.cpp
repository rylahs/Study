// 0x13. 이분 탐색
// Written by : Rylah
// Date : 2022.02.14
// 10816. 숫자 카드 2
// https://www.acmicpc.net/problem/10816
// https://www.acmicpc.net/source/39047233

#include <bits/stdc++.h>
using namespace std;
int lower(const vector<int>& v, int x)
{
	int start = 0;
	int end = v.size() - 1;

	while (start < end)
	{
		int middle = (start + end) / 2;
		if (v[middle] >= x)
			end = middle;
		else // v[middle] < x
			start = middle + 1;
	}
	return start;
}
int upper(const vector<int>& v, int x)
{
	int start = 0;
	int end = v.size() - 1;

	while (start < end)
	{
		int middle = (start + end) / 2;
		if (v[middle] > x)
			end = middle;
		else
			start = middle + 1;
	}
	return start;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n + 1);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end() - 1);

	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int target;
		cin >> target;

		cout << upper(v, target) - lower(v, target) << " ";
	}

	return 0;
}