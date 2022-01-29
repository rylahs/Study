// BOJ 3986. ���� �ܾ�
// https://www.acmicpc.net/problem/3986

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, count = 0;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        stack<char> s;
        for (auto& e : str)
        {
            if (!s.empty() && e == s.top())
            {
                s.pop();
                continue;
            }
            s.push(e);
        }

        if (s.empty())
            count++;

    }
    cout << count;
    return 0;
}