// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 10814. 빈도 정렬
// https://www.acmicpc.net/problem/10814
// https://www.acmicpc.net/source/38975123

#include <bits/stdc++.h>
using namespace std;

int n;

bool compare(pair<int, string> p1, pair<int, string> p2)
{
    return p1.first < p2.first;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    cin >> n;
    vector<pair<int, string>> v;

    int age;
    string name;

    for (int i = 0; i < n; i++)
    {
        cin >> age;
        cin >> name;
        v.push_back({ age, name });
    }

    stable_sort(v.begin(), v.end(), compare);

    for (auto& e : v)
        cout << e.first << " " << e.second << "\n";

    return 0;
}