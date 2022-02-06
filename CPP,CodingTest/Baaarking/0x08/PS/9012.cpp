// 0x08. ½ºÅÃÀÇ È°¿ë(¼ö½ÄÀÇ °ýÈ£ ½Ö)
// Written by : Rylah
// Date : 2022.02.06
// 9012. °ýÈ£
// https://www.acmicpc.net/problem/9012
// https://www.acmicpc.net/source/38625925

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        stack<char> st;
        string str;
        cin >> str;
        bool isValid = true;
        for (auto& e : str)
        {
            if (st.empty() || e == '(')
            {
                st.push(e);
                continue;
            }
            if (e == ')')
            {
                if (st.top() != '(')
                {
                    isValid = false;
                    break;
                }
                else
                    st.pop();
            }
        }
        if (!st.empty())
            isValid = false;

        if (isValid)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}