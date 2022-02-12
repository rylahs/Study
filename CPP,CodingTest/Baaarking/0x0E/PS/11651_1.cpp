// 0x0E. 정렬 I
// Written by : Rylah
// Date : 2022.02.12
// 11651. 좌표 정렬하기 2
// https://www.acmicpc.net/problem/11651


#include <bits/stdc++.h>
using namespace std;

int n;

bool compareX(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

bool compareY(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}
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
        v.push_back({ x, y });
    }

    stable_sort(v.begin(), v.end(), compareX);
    stable_sort(v.begin(), v.end(), compareY);

    for (auto& e : v)
        cout << e.first << " " << e.second << "\n";

    return 0;
}