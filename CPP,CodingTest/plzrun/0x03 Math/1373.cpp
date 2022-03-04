// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 1373
// https://www.acmicpc.net/problem/1373

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    while (str.length() % 3 != 0)
        str = '0' + str;

    string ans = "";

    for (int i = 0; i < str.length(); i += 3)
    {
        int tmp = 0;
        for (int j = i; j < i + 3; j++)
            tmp += (str[j] - '0') * pow(2, 2 - (j % 3));

        ans += to_string(tmp);
    }

    cout << ans;

    return 0;
}