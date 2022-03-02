// plzrun 01. 입출력
// Written by : Rylah
// Date : 2022.03.01
// 1924
// https://www.acmicpc.net/problem/1924

#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string datestr[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int m, d;
	cin >> m >> d;

	int totdate = 0;
	for (int i = 0; i < m; i++)
		totdate += month[i];
	
	totdate += d;

	cout << datestr[totdate % 7] << "\n";
	return 0;
}