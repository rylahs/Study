// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 1181. 단어 정렬
// https://www.acmicpc.net/problem/1181
// https://www.acmicpc.net/source/38972190

#include <bits/stdc++.h>
using namespace std;

// set의 인자는 기본적으로 value, compare operator가 정의
// operator는 구조체로 되어있음
// 커스텀 하기 위해서는 오버로딩이 필요
struct compare {
    bool operator()(const string& s1, const string& s2) const {
        if (s1.length() != s2.length())
            return s1.length() < s2.length();
        return s1 < s2;
    }
};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    set<string, compare> s;
    while (n--)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

    for (auto& e : s)
        cout << e << "\n";

    return 0;
}