#include <bits/stdc++.h>
using namespace std;

int main_11004(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;
    int n, target;
    cin >> n >> target;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.emplace_back(a);
    }
    sort(v.begin(), v.end());
    cout << v[target - 1];
    return 0;
}