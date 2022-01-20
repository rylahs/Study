// BOJ 11328. Strfry
// Written Date : 22.01.20
// Writer : Rylah
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
        int arr[26] = { 0, };
        string ori;
        cin >> ori;
        string comp;
        cin >> comp;
        for (int i = 0; i < ori.size(); i++)
            arr[ori[i] - 'a']++;
        for (int i = 0; i < comp.size(); i++)
            arr[comp[i] - 'a']--;

        bool isPossible = true;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != 0)
            {
                isPossible = false;
                break;
            }
        }
        if (isPossible)
            cout << "Possible" << "\n";
        else
            cout << "Impossible" << "\n";
    }
    return 0;
}