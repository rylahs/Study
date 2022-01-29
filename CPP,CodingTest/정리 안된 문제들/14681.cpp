#include <bits/stdc++.h>
using namespace std;

int main_14681(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    if (x < 0)
        cout << ((y < 0) ? 3 : 2);
    else
        cout << ((y < 0) ? 4 : 1);

    return 0;
}