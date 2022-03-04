// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 11866
// https://www.acmicpc.net/problem/11866

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;

    queue<int> q;
    for (int i = 1; i <= n; i++)
        q.push(i);

    cout << "<";
    while (!q.empty())
    {
        for (int i = 0; i < k - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }

        cout << q.front();
        q.pop();

        if (q.size())
            cout << ", ";
    }
    cout << ">" << "\n";
    
    return 0;
}