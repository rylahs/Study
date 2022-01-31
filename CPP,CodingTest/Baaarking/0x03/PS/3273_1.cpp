// 0x03. 배열
// Written by : Rylah
// Date : 2022.01.31
// 3273. 두 수의 합
// https://www.acmicpc.net/problem/3273
// https://www.acmicpc.net/source/38382113

#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int target;
	cin >> target;
	int count = 0;

	int wIdx = 0;
	int rIdx = n - 1;
	sort(arr, arr + n);
	int sum;
	while (wIdx < rIdx)
	{
		sum = arr[wIdx] + arr[rIdx];
		if (sum == target) 
		{
			count++;
			rIdx--;
			wIdx++;
			continue;
		}
		else if (sum < target)
		{
			wIdx++;
			continue;
		}
		else if (sum > target)
		{
			rIdx--;
			continue;
		}
	}



	cout << count << "\n";

	return 0;
}