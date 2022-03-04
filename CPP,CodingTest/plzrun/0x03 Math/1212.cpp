// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 1212
// https://www.acmicpc.net/problem/1212

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    if (str == "0")
    {
        cout << 0 << "\n";
        return 0;
    }

    string ans;

    for (int i = 0; i < str.length(); i++)
    {
        ans += to_string((str[i] - '0') / 4);
        ans += to_string((str[i] - '0') % 4 / 2);
        ans += to_string((str[i] - '0') % 4 % 2);
    }
  
    while (ans[0] == '0')
        ans = ans.substr(1);
    cout << ans;
    

    return 0;
}