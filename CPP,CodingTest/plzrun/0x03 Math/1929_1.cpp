// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 1978
// https://www.acmicpc.net/problem/1978

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        if (isPrime(i))
            cout << i << "\n";
    }

    return 0;
}