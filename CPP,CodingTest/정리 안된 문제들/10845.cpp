// BOJ 10845. ť
// https://www.acmicpc.net/problem/10845

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    queue<int> Q;
    while (n--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "push")
        {
            int a;
            cin >> a;
            Q.push(a);
        }
        else if (cmd == "pop")
        {
            if (Q.empty())
                cout << -1 << '\n';

            else
            {
                cout << Q.front() << '\n';
                Q.pop();
            }
        }

        else if (cmd == "size")
            cout << Q.size() << '\n';
        
        else if (cmd == "empty")
            cout << Q.empty() << '\n';

        else if (cmd == "front")
        {
            if (Q.empty())
                cout << -1 << '\n';
            else
                cout << Q.front() << '\n';
        }
        
        else if (cmd == "back")
        {
            if (Q.empty())
                cout << -1 << '\n';
            else
                cout << Q.back() << '\n';
        }
    }

    return 0;
}