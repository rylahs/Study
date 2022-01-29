// BOJ 10989. 수 정렬하기 3
// https://www.acmicpc.net/problem/10989

#include <bits/stdc++.h>
using namespace std;
int a[10002];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        int input;
        cin >> input;
        a[input]++;
    }
    for (int i = 1; i <= 10001; i++)
    {
        if (a[i] != 0)
        {
            while (a[i] > 0)
            {
                cout << i << '\n';
                a[i]--;
            }
        }
    }  

    
    return 0;
}