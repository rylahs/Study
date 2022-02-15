// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 1181. 단어 정렬
// https://www.acmicpc.net/problem/1181
// https://www.acmicpc.net/source/38971734

#include <bits/stdc++.h>
using namespace std;

bool compare(string str1, string str2)
{
    if (str1.length() != str2.length())
        return str1.length() < str2.length();

    return str1 < str2;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> v;
    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        v.emplace_back(str);
    }

    sort(v.begin(), v.end(), compare);
    
    v.erase(unique(v.begin(), v.end()), v.end());

    for (auto& e : v)
        cout << e << "\n";

    return 0;
}