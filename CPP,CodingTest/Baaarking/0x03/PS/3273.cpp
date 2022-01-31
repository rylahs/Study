// 0x03. 배열
// Written by : Rylah
// Date : 2022.01.31
// 3273. 두 수의 합
// https://www.acmicpc.net/problem/3273
// https://www.acmicpc.net/source/38381784

#include <bits/stdc++.h>
using namespace std;

int arr[100001];
bool pin[2000001];
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
	for (int i = 0; i < n; i++)
	{
		if (target - arr[i] > 0 && pin[target - arr[i]])
			count++;
		pin[arr[i]] = true;
	}

	cout << count << "\n";

	return 0;
}