// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 7795. 먹을 것인가 먹힐 것인가
// https://www.acmicpc.net/problem/7795
// https://www.acmicpc.net/source/38977876

// O(M + N)

#include <bits/stdc++.h>
using namespace std;
int a[20001];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int testCase; 
    cin >> testCase;

    while (testCase--) {
        int n, m; 
        cin >> n >> m;
        
        for (int i = 0; i < n; ++i) 
            cin >> a[i];
        sort(a, a + n);
        int ans = 0;
        for (int i = 0; i < m; ++i) {
            int num; cin >> num;
            int index = upper_bound(a, a + n, num) - a;
            ans += n - index;
        }
        cout << ans << '\n';
    }
}