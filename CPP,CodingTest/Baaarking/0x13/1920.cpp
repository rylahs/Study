// 0x13. 이분 탐색
// Written by : Rylah
// Date : 2022.02.14
// 1920. 수 찾기
// https://www.acmicpc.net/problem/1920
// https://www.acmicpc.net/source/39038408

#include <bits/stdc++.h>
using namespace std;

bool b_search(vector<int>& v, int x)
{
	int start = 0;
	int end = (int)v.size() - 1;
	

	while (start <= end)
	{
		int middle = (start + end) / 2;
		if (v[middle] == x)
		{
			return true;
		}
		else if (v[middle] < x)
		{
			start = middle + 1;
		}
		else
		{
			end = middle - 1;
		}

	}


	return false;
}

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
		bool isFind = b_search(v, findNum);
		if (isFind)
			cout << true << "\n";
		else
			cout << false << "\n";
	}


	return 0;
}