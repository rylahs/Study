// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 11652. 카드
// https://www.acmicpc.net/problem/11652
// https://www.acmicpc.net/source/38970717

#include <bits/stdc++.h>
using namespace std;

long long arr[100001];

int n;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    long long mxVal = -(1ll << 62) - 1;
    int cnt = 0;
    int mxCnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || arr[i - 1] == arr[i])
            cnt++;
        else
        {
            if (cnt > mxCnt)
            {
                mxCnt = cnt;
                mxVal = arr[i - 1];
            }

            cnt = 1;

        }
    }

    if (cnt > mxCnt)
    {
        mxCnt = cnt;
        mxVal = arr[n - 1];
    }

    cout << mxVal << "\n";
  
    return 0;
}