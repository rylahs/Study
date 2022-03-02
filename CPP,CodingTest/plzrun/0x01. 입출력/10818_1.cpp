// plzrun 01. 입출력
// Written by : Rylah
// Date : 2022.03.01
// 10818
// https://www.acmicpc.net/problem/10818

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int minVal = 1000001;
	int maxVal = -1000001;

	int input;
	while (n--)
	{
		cin >> input;
		minVal = min(minVal, input);
		maxVal = max(maxVal, input);
	}

	cout << minVal << " " << maxVal << "\n";

	return 0;
}