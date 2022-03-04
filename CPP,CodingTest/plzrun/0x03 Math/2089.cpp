// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 2089
// https://www.acmicpc.net/problem/2089

#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> v;
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << "\n";
        return 0;
    }

    while (n)
    {
        if (n < 0)
        {
            if (-n % 2 == 0)
            {
                n = -n / 2;
                v.emplace_back(0);
            }
            else
            {
                n = -n / 2 + 1;
                v.emplace_back(1);
            }
        }
        else
        {
            v.emplace_back(n % 2);
            n = -(n / 2);
        }
    }

    reverse(v.begin(), v.end());
 
    for (auto& e : v)
        cout << e;
    return 0;
}