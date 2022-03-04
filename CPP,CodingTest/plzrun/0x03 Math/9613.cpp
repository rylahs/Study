// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 9613
// https://www.acmicpc.net/problem/9613

#include <bits/stdc++.h>
using namespace std;

int arr[1000005];

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;

   
    while (testCase--)
    {
        int n;
        cin >> n;

        long long gcdSum = 0;
        
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (i == j)
                    continue;
                gcdSum += gcd(arr[i], arr[j]);
            }
           
        }

        cout << gcdSum << "\n";
    }
    return 0;
}