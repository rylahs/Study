// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 2910. 빈도 정렬
// https://www.acmicpc.net/problem/2910
// https://www.acmicpc.net/source/38974831

#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int>& p1, const pair<int, int>& p2)
{
    return p1.first > p2.first;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<pair<int, int>> v;

    int n, c;
    cin >> n >> c;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        bool isInput = false;
        for (auto& e : v)
        {
            if (e.second == x)
            {
                isInput = true;
                e.first++;
                break;
            }
        }
        if (!isInput)
            v.push_back({ 1, x });
    }

    stable_sort(v.begin(), v.end(), compare);

    for (auto& e : v)
    {
        while (e.first--)
        {
            cout << e.second << " ";
        }
    }

    return 0;
}