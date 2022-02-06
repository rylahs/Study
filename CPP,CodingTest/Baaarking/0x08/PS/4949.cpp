// 0x08. ½ºÅÃÀÇ È°¿ë(¼ö½ÄÀÇ °ýÈ£ ½Ö)
// Written by : Rylah
// Date : 2022.02.04
// 4949. ±ÕÇüÀâÈù ¼¼»ó
// https://www.acmicpc.net/problem/4949
// https://www.acmicpc.net/source/38530427

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
        bool isTrue = true;
        stack<char> st;
        for (auto& e : str)
        {
            if (e == '[' || e == '(')
            {
                st.push(e);
            }

            else if (e == ')')
            {
                if (st.empty() || st.top() != '(')
                {
                    isTrue = false;
                    break;
                }
                else
                {
                    st.pop();
                }
            }

            else if (e == ']')
            {
                if (st.empty() || st.top() != '[')
                {
                    isTrue = false;
                    break;
                }
                else
                {
                    st.pop();
                }
            }
        }
        if (!st.empty())
            isTrue = false;
        if (isTrue)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
        
    }
    return 0;
}