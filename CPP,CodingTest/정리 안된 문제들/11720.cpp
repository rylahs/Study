// BOJ 11720. 숫자의 합
// https://www.acmicpc.net/problem/11720

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string str;
    cin >> n >> str;
    int sum = 0;
    for (auto e : str)
        sum += e - '0';
    
    cout << sum << '\n';
    return 0;
}