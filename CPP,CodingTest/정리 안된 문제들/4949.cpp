// BOJ 4949. ±ÕÇüÀâÈù ¼¼»ó
// https://www.acmicpc.net/problem/4949

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1)
    {
        string str;
        getline(cin, str);
        if (str == ".")
            break;
        stack<char> s;
        bool breaker = false;
        for (auto e : str)
        {
            if (e == '(' || e == '[')
                s.push(e);
            else if (e == ')')
            {
                if (s.empty() || s.top() != '(')
                {
                    breaker = true;
                    break;
                }
                s.pop();
            }
            else if (e == ']')
            {
                if (s.empty() || s.top() != '[')
                {
                    breaker = true;
                    break;
                }
                s.pop();
            }
        }
        if (!s.empty())
            breaker = true;
        if (breaker)
            cout << "no\n";
        else
            cout << "yes\n";

    }
    return 0;
}