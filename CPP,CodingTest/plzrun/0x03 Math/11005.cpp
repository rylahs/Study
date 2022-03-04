// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 11005
// https://www.acmicpc.net/problem/11005

#include <bits/stdc++.h>
using namespace std;

char arr[36] = { '0', '1', '2', '3', '4', '5',
                '6', '7', '8', '9', 'A', 'B',
                'C', 'D', 'E', 'F', 'G', 'H',
                'I', 'J', 'K', 'L', 'M', 'N',
                'O', 'P', 'Q', 'R', 'S', 'T',
                'U', 'V', 'W', 'X', 'Y', 'Z' };
     
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b;
    cin >> n >> b;

    string str;
    while (n >= b)
    {
        str += arr[n % b];
        n /= b;
    }

    str += arr[n];
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];

    return 0;
}