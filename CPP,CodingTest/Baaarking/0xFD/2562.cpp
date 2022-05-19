#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(9);
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];

    cout << *max_element(v.begin(), v.end()) << "\n";
    cout << max_element(v.begin(), v.end()) - v.begin() + 1 << "\n";

    return 0;
}
