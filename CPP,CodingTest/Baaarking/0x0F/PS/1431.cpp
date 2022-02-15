// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 1431. 시리얼 번호
// https://www.acmicpc.net/problem/1431
// https://www.acmicpc.net/submit/1431/38959195

#include <bits/stdc++.h>
using namespace std;

int n;

bool compare(const string& a,const string& b)
{
    int aSum = 0, bSum = 0;
    if (a.length() != b.length())
        return a.length() < b.length();

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
            aSum += a[i] - '0';
        if (b[i] >= '0' && b[i] <= '9')
            bSum += b[i] - '0';
    }
    if (aSum != bSum)
        return aSum < bSum;
    else
       return a < b;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    vector<string> v;
    string str;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        v.emplace_back(str);
    }

    sort(v.begin(), v.end(), compare);

    for (auto& e : v)
        cout << e << "\n";

    return 0;
}