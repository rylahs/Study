// BOJ 2504. 괄호의 값
// https://www.acmicpc.net/problem/2504

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<char> s;
    string str;
    cin >> str;
    int value = 0;
    int multVal = 1;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        { 
            multVal *= 2;
            s.push(str[i]);
        }
        else if (str[i] == '[')
        {
            multVal *= 3;
            s.push(str[i]);
        }
        else if (str[i] == ')')
        {
            if (s.empty() || s.top() != '(')
            {
                cout << 0;
                return 0;
            }
            if (str[i - 1] == '(') // 곱해지는 경우가 아닌 end
                value += multVal;
            s.pop();
            multVal /= 2;
        }
        else  // if (str[i] == ']')
        {
            if (s.empty() || s.top() != '[')
            {
                cout << 0;
                return 0;
            }
            if (str[i - 1] == '[') // 곱해지는 경우가 아닌 end
                value += multVal;
            s.pop();
            multVal /= 3;
        }
    }
    if (s.empty())
        cout << value;
    else
        cout << 0;



    return 0;
}