// 0x0E. 정렬 I
// Written by : Rylah
// Date : 2022.02.12
// 15688. 수 정렬하기 5
// https://www.acmicpc.net/problem/15688
// https://www.acmicpc.net/source/38956968

#include <bits/stdc++.h>
using namespace std;

int n, a;
const int MX = 2000000, HALF = MX / 2;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> v(MX + 1, 0);
    cin >> n;

    while (n--)
    {
        cin >> a;
        v[a + HALF]++;
    }

    for (int i = 0; i <= MX; i++)
    {
        while (v[i])
        {
            cout << i - HALF << "\n";
            v[i]--;
        }
    }
    
    return 0;
}