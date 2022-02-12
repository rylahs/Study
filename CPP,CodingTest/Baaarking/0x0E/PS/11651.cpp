// 0x0E. 정렬 I
// Written by : Rylah
// Date : 2022.02.12
// 11651. 좌표 정렬하기 2
// https://www.acmicpc.net/problem/11651


#include <bits/stdc++.h>
using namespace std;

int n;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    int x, y;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back({ y, x });
    }

    sort(v.begin(), v.end(), less<>());

    for (auto& e : v)
        cout << e.second << " " << e.first << "\n";

    return 0;
}