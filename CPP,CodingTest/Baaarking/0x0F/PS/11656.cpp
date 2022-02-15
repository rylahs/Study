// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 11656. 접미사 배열
// https://www.acmicpc.net/problem/11656
// https://www.acmicpc.net/source/38976135

#include <bits/stdc++.h>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;

    vector<string> v;
    for (int i = 0; i < (int)str.size(); i++)
        v.emplace_back(str.substr(i));

    sort(v.begin(), v.end());

    for (auto& e : v)
        cout << e << "\n";

    return 0;
}