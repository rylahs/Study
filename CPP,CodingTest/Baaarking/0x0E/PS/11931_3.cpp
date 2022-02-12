// 0x0E. 정렬 I
// Written by : Rylah
// Date : 2022.02.12
// 11931. 수 정렬하기 4
// https://www.acmicpc.net/problem/11931
// https://www.acmicpc.net/source/38956192

#include <bits/stdc++.h>
using namespace std;

const int MX = 2000000, HALF = MX / 2;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<bool> v(MX + 1);
    
    int n;
    cin >> n;
    
    while (n--)
    {
        int a;
        cin >> a;
        v[a + HALF] = true;
    }

    for (int i = MX; i >= 0; i--)
    {
        if (v[i])
            cout << i - HALF << "\n";
    }

    return 0;
}