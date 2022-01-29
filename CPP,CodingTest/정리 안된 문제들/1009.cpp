// BOJ 1009. 분산처리
// https://www.acmicpc.net/problem/1009

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int a, b;
        cin >> a >> b;
        int temp_a = 1;
        while (b--)
        {
            temp_a *= a;
            temp_a %= 10;
        }
        if (temp_a != 0)
            cout << temp_a << '\n';
        else
            cout << 10 << '\n';
    }
    
    return 0;
}