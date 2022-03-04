// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 1978
// https://www.acmicpc.net/problem/1978

#include <bits/stdc++.h>
using namespace std;

int Erastos[1000002];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 2; i < 1000002; i++)
        Erastos[i] = i;

    for (int i = 2; i < 1000002; i++)
    {
        for (int j = i + i; j < 1000002; j += i)
        {
            if (Erastos[j] == 0)
                continue;
            Erastos[j] = 0;
        }
    }
    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        if (Erastos[i] != 0)
            cout << i << "\n";
    }
    return 0;
}