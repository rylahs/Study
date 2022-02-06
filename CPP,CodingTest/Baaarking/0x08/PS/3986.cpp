// 0x08. ������ Ȱ��(������ ��ȣ ��)
// Written by : Rylah
// Date : 2022.02.04
// 3986. ���� �ܾ�
// https://www.acmicpc.net/problem/3986
// https://www.acmicpc.net/source/37194123

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int cnt = 0;
    
    while (n--)
    {
        stack<char> st;
        string str;
        cin >> str;

        for (auto& e : str)
        {
            if (st.empty() || e != st.top())
                st.push(e);
            else
                st.pop();
        }

        if (st.empty())
            cnt++;
    }
    cout << cnt << "\n";
    return 0;
}