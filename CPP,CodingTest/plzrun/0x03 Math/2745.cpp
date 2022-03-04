// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 2745
// https://www.acmicpc.net/problem/2745

#include <bits/stdc++.h>
using namespace std;

char arr[36] = { '0', '1', '2', '3', '4', '5',
                '6', '7', '8', '9', 'A', 'B',
                'C', 'D', 'E', 'F', 'G', 'H',
                'I', 'J', 'K', 'L', 'M', 'N',
                'O', 'P', 'Q', 'R', 'S', 'T',
                'U', 'V', 'W', 'X', 'Y', 'Z' };
     
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    int b;
    cin >> b;
    
    int cnt = 0;

    int sum = 0;
    // 35* 1 + 35 * 36 + 35 * 36 * 36
    for (int i = str.length() - 1; i >= 0; i--)
    {
        int num = 0;
        int temp = 0;
        for (int j = 0; j < b; j++)
        {
            if (str[i] == arr[j])
            {
                temp = j;
                break;
            }
        }
        num = temp * pow(b, cnt);
        cnt++;
        sum += num;
    }

    cout << sum << "\n";

    return 0;
}