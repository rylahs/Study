// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 10814. 빈도 정렬
// https://www.acmicpc.net/problem/10814
// https://www.acmicpc.net/source/38975633

#include <bits/stdc++.h>
using namespace std;

int n;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    vector<tuple<int, int, string>> v;
    for (int i = 0; i < n; i++)
    {
        int age;
        string str;
        cin >> age >> str;
        v.push_back({ age, i, str });
    }

    sort(v.begin(), v.end());

    for (auto &[age, _, name] : v)
        cout << age << " " << name << '\n';
    return 0;
}