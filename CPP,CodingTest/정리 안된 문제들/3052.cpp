// BOJ 3052. ³ª¸ÓÁö
// https://www.acmicpc.net/problem/3052

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<int> s;
    for (int i = 0; i < 10; i++)
    {
        int a;
        cin >> a;
        s.insert(a % 42);
    }
    cout << s.size() << '\n';

    return 0;
}