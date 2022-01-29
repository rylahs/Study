// BOJ 1919. 애너그램 만들기
// https://www.acmicpc.net/problem/1919

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string str1, str2;
    cin >> str1 >> str2;

    int a[26] = {};

    for (auto i : str1)
        a[i - 'a']++;
    for (auto i : str2)
        a[i - 'a']--;
    int count = 0;
    for (int i : a)
    {
        if (i != 0)
            count += abs(i);
    }

    cout << count;


    return 0;
}
