// 0x14. 투 포인터
// Written by : Rylah
// Date : 2022.02.16
// 2230. 수 고르기
// https://www.acmicpc.net/problem/2230
// https://www.acmicpc.net/source/39148447

#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	sort(arr, arr + n);
	
	int rIdx = 0;
	int minGap = 2e9 + 2;
	

	for (int wIdx = 0; wIdx < n; wIdx++)
	{
		while (rIdx < n && arr[rIdx] - arr[wIdx] < m)
			rIdx++;

		if (rIdx == n)
			break;
		minGap = min(minGap, arr[rIdx] - arr[wIdx]);
	}

	cout << minGap << "\n";
	
	return 0;
}