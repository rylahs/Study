// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 7795. 먹을 것인가 먹힐 것인가
// https://www.acmicpc.net/problem/7795
// https://www.acmicpc.net/source/38977876

// O(M + N)

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n, m;
        cin >> n >> m;

        vector<pair<int, int>> v(n + m);
        
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v[i] = { a, 0 };
        }
        
        for (int i = n; i < n + m; i++)
        {
            int b;
            cin >> b;
            v[i] = { b, 1 };
        }

        sort(v.begin(), v.end());

        int cnt = 0;
        int sum = 0;
        for (int i = 0; i < n + m; i++)
        {
            if (v[i].second == 0)
                sum += cnt;
            else
                cnt++;
        }

        cout << sum << "\n";
    }

    return 0;
}