// BOJ 11718. 그대로 출력하기
// https://www.acmicpc.net/problem/11718

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    while (!cin.eof())
    {
        getline(cin, str);
        cout << str << '\n';
    }
    return 0;
}