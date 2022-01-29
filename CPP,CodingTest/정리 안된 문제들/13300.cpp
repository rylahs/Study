// BOJ 13300. πÊπË¡§
// https://www.acmicpc.net/problem/13300
#include <bits/stdc++.h>
using namespace std;

int room[2][7];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n , k;
	cin >> n >> k;
	int gender, grade;
	for (int i = 0; i < n; i++)
	{
		cin >> gender >> grade;
		room[gender][grade]++;
	}

	int roomnum = 0;
	for (int i = 1; i < 8; i++)
	{
		roomnum += room[0][i] / k;
		if (room[0][i] % k > 0)
			roomnum++;
		roomnum += room[1][i] / k;
		if (room[1][i] % k > 0)
			roomnum++;
	}
	cout << roomnum;

	return 0;
}