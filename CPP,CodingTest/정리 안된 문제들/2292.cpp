// BOJ 2292. ¹úÁý
// https://www.acmicpc.net/problem/2292

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int count = 0;
    int temp = 1;
    
    while (temp <= n)
    {
        if (temp < 2)
        {
            temp += 1;
            count++;
        }
        else
        {
            temp += count * 6;
            count++;
        }
    }
    cout << count << '\n';
    // 1
    // +1
    // 2 ~ 7
    // +6
    // 8 ~ 19
    // +12
    // 20 ~ 37
    // +18
    // 38 ~
    return 0;
}