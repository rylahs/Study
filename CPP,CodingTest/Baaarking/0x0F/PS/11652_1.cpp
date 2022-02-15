// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 11652. 카드
// https://www.acmicpc.net/problem/11652
// https://www.acmicpc.net/source/38970851

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    map<long long, int> numPairs;

    for (int i = 0; i < n; i++)
    {
        long long input;
        cin >> input;
        numPairs[input]++;
    }

    int mxCnt = -1;
    long long mxVal = -1;

    for (auto e = numPairs.begin(); e != numPairs.end(); e++)
    {
        if (e->second > mxCnt)
        {
            mxCnt = e->second;
            mxVal = e->first;
        }
    }

    cout << mxVal << "\n";
    return 0;
}// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 11652. 카드
// https://www.acmicpc.net/problem/11652
// https://www.acmicpc.net/source/38970851

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    map<long long, int> numPairs;

    for (int i = 0; i < n; i++)
    {
        long long input;
        cin >> input;
        numPairs[input]++;
    }

    int mxCnt = -1;
    long long mxVal = -1;

    for (auto e = numPairs.begin(); e != numPairs.end(); e++)
    {
        if (e->second > mxCnt)
        {
            mxCnt = e->second;
            mxVal = e->first;
        }
    }

    cout << mxVal << "\n";
    return 0;
}