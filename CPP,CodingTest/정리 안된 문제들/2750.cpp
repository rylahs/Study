// BOJ 2750. 수 정렬하기
// https://www.acmicpc.net/problem/2750

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.emplace_back(a);
    }
    sort(v.begin(), v.end(), less<>());
    for (auto& e : v)
        cout << e << '\n';
    return 0;
}