// 0x13. 이분 탐색
// Written by : Rylah
// Date : 2022.02.14
// 1920. 수 찾기
// https://www.acmicpc.net/problem/1920
// https://www.acmicpc.net/source/39038444

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	int m;
	cin >> m;

	int findNum;
	for (int i = 0; i < m; i++)
	{
		cin >> findNum;
		cout << binary_search(v.begin(), v.end(), findNum) << "\n";
	}


	return 0;
}