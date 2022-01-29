// BOJ 1065. 한수
// https://www.acmicpc.net/problem/1065
// 등차수열이란
// 차가 일정한 수열
// 1~99까지는 그 자신이 등차수열이 될 수 밖에 없다.
// 100부터 100의 자리와 10의자리 10의 자리와 1의 자리의 차가 같은 경우에 등차수열이다.

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i < 100)
            count++;
        else if (i < 1000)
            if ( (i / 100 - i % 100 / 10) == (i % 100 / 10 - i % 100 % 10))
                count++;
    }
    cout << count << '\n';

    return 0;
}