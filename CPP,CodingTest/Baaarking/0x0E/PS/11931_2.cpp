// 0x0E. 정렬 I
// Written by : Rylah
// Date : 2022.02.12
// 11931. 수 정렬하기 4
// https://www.acmicpc.net/problem/11931
// https://www.acmicpc.net/source/38955794

#include <bits/stdc++.h>
using namespace std;

const int MXN = 2'000'000, HALF = MXN / 2;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<bool> isnum(MXN + 2);
    int N, t;
    cin >> N;
    while (N--) {
        cin >> t;
        isnum[t + HALF] = true;
    }
    for (int i = MXN; i >= 0; i--)
        if (isnum[i]) cout << i - HALF << '\n';
}
