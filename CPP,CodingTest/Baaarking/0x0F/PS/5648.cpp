// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 5648. 역원소 정렬
// https://www.acmicpc.net/problem/5648
// https://www.acmicpc.net/source/38971243

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        reverse(str.begin(), str.end());
        
        v.emplace_back(stoll(str));
    }

    sort(v.begin(), v.end());

    for (auto& e : v)
        cout << e << "\n";

    return 0;
}