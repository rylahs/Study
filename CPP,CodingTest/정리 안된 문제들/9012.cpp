// BOJ 9012. °ýÈ£
// https://www.acmicpc.net/problem/9012

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        string PS;
        cin >> PS;
        stack<char> s;
        bool isVPS = false;
        for (auto& e : PS)
        {
            if (e == ')')
            {
                if (s.empty() || s.top() != '(')
                {
                    isVPS = true;
                    break;
                }

                s.pop();

            }

            else {
                s.push(e);
            }
        }
        if (!s.empty())
            isVPS = true;
        if (isVPS)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}