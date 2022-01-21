// BOJ 1475. ���ȣ
// Written Date : 22.01.20
// Writer : Rylah
// https://www.acmicpc.net/problem/1475
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int arr[10] = { 0, };
	int n;
	cin >> n;
	while (n != 0)
	{
		arr[n % 10]++;
		n /= 10;
	}

	int minSet = -1;
	for (int i = 0; i < 10; i++)
	{
		if (i == 6 || i == 9)
			continue; // ���� ���߿� ���
		minSet = max(arr[i], minSet);
	}
	int snNum = (arr[6] + arr[9]) / 2;
	if ( (arr[6] + arr[9]) % 2 != 0)
		snNum++;
	minSet = max(minSet, snNum);
	cout << minSet << "\n";
	return 0;
}