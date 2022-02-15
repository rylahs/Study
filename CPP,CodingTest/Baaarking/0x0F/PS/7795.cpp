// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 7795. 먹을 것인가 먹힐 것인가
// https://www.acmicpc.net/problem/7795
// https://www.acmicpc.net/source/38977113

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

        vector<int> A(n), B(m);
        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < m; i++)
            cin >> B[i];

        sort(A.begin(), A.end(), greater<>());
        sort(B.begin(), B.end(), less<>());

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (A[i] > B[j])
                    cnt++;
                else
                    break;
            }
        }

        cout << cnt << "\n";
    }


    return 0;
}