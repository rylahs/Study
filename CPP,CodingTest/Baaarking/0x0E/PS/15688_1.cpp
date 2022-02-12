// 0x0E. 정렬 I
// Written by : Rylah
// Date : 2022.02.12
// 15688. 수 정렬하기 5
// https://www.acmicpc.net/problem/15688
// https://www.acmicpc.net/source/38957152


#include <bits/stdc++.h>
using namespace std;

int n, a;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    cin >> n;

    while (n--)
    {
        cin >> a;
        v.emplace_back(a);
    }

    sort(v.begin(), v.end());
    
    for (auto& e : v)
        cout << e << "\n";

    return 0;
}