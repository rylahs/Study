// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 2609
// https://www.acmicpc.net/problem/2609

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

    int a, b;
    cin >> a >> b;
    int gcdVal = gcd(a, b);
    cout << gcdVal << "\n";

    int lcmV = a * b / gcdVal;
    cout << lcmV << "\n";

    

    return 0;
}