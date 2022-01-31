// 0x03. 배열
// Written by : Rylah
// Date : 2022.01.30
// 1475. 방 번호
// https://www.acmicpc.net/problem/1475
// https://www.acmicpc.net/source/38360742

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int arr[10] = { 0, };
	int num;
	cin >> num;
	while (num > 0)
	{
		arr[num % 10]++;
		num /= 10;
	}
	int room = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i == 6 || i == 9)
			continue;
		room = max(room, arr[i]);
	}

	room = max(room, (arr[6] + arr[9] + 1) / 2);

	cout << room << "\n";
	return 0;
}