// BOJ 13300. πÊ πË¡§
// Written Date : 22.01.20
// Writer : Rylah
// https://www.acmicpc.net/problem/13300

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int room[2][7] = { {0,0}, };
    while (n--)
    {
        int gender;
        int grade;
        cin >> gender >> grade;
        room[gender][grade]++;
    }

    int roomCount = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < 7; j++)
        {
            roomCount += room[i][j] / k;
            if (room[i][j] % k != 0)
                roomCount++;
        }
    }
    cout << roomCount;
    return 0;
}