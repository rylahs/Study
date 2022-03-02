// plzrun 01. 입출력
// Written by : Rylah
// Date : 2022.03.01
// 10818
// https://www.acmicpc.net/problem/10818

#include <bits/stdc++.h>
using namespace std;

int num[1000005];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> num[i];

	cout << *min_element(num, num + n) << " " << *max_element(num, num + n) << "\n";


	
	return 0;
}