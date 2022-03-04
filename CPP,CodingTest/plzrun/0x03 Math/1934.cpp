// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 1934
// https://www.acmicpc.net/problem/1934

#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int a, b;
        cin >> a >> b;

        int gcdVal = gcd(a, b);

        cout << a * b / gcdVal << "\n";
    }

    return 0;
}