// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 1850
// https://www.acmicpc.net/problem/1850

#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
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

    long long  a, b;
    cin >> a >> b;


    long long gcdV = gcd(a, b);

    string str;
    for (int i = 0; i < gcdV; i++)
        str += '1';
    cout << str << "\n";

    return 0;
}