#include <bits/stdc++.h>
using namespace std;

int main_13300(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n= 1, k = 1;
	cin >> n >> k;
	int room[2][7] = {};

	for (int i = 0; i < n; i++)
	{
		int gend, grade;
		cin >> gend >> grade;
		room[gend][grade]++;
	}

	int roomNum = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 7; j++) {
			if (room[i][j] > 0)
			{
				if (room[i][j] % k == 0)
					roomNum += room[i][j] / k;
				else
					roomNum += (room[i][j] / k) + 1;
			}
		}
	}

	cout << roomNum;
	return 0;
}