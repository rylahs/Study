// 0xFD. Practice
// Written by : Rylah
// Date : 2022.03.01
// 1018. 체스판 다시 칠하기
// https://www.acmicpc.net/problem/1018

#include <bits/stdc++.h>

using namespace std;

string board[53];

string WB[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};
string BW[8]{
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};
int cnt_WB(int x, int y)
{
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (board[x + i][y + j] != WB[i][j])
				cnt++;
		}
	}
	return cnt;
}

int cnt_BW(int x, int y)
{
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (board[x + i][y + j] != BW[i][j])
				cnt++;
		}
	}
	return cnt;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	int minVal = 2550;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> board[i];

	for (int i = 0; i + 8 <= n; i++)
	{
		for (int j = 0; j + 8 <= m; j++)
		{
			int tmp;
			tmp = min(cnt_WB(i, j), cnt_BW(i, j));
			minVal = min(minVal, tmp);
		}
	}
	cout << minVal << "\n";
	return 0;
}