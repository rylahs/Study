// 0x03. 배열
// Written by : Rylah
// Date : 2022.01.31
// 13300. 방 배정
// https://www.acmicpc.net/problem/13300
// https://www.acmicpc.net/source/38382640

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int room[2][7] = { {0,}, };
	int n, k;
	cin >> n >> k;
	while (n--)
	{
		int gender, grade;
		cin >> gender >> grade;
		room[gender][grade]++;
	}

	int roomCnt = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			roomCnt += room[i][j] / k;
			if (room[i][j] % k != 0)
				roomCnt++;
		}
	}
	cout << roomCnt << "\n";
	return 0;
}