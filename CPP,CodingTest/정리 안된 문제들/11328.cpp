// BOJ 11328. Strfry
// https://www.acmicpc.net/problem/11328

#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int a[26] = {};
        string str1, str2;
        cin >> str1 >> str2;
        for (auto c : str1)
            a[c - 'a']++;
        for (auto c : str2)
            a[c - 'a']--;
        

        bool isPossible = true;

        for (int i : a)
        {
            if (i != 0)
            {
                isPossible = false;
                break;
            }
        }

        if (isPossible == false)
            cout << "Impossible" << '\n';
        else
            cout << "Possible" << '\n';

    }
    return 0;
}
