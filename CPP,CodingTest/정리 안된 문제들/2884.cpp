#include <bits/stdc++.h>
using namespace std;

int main_2884(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int hour, min;
    cin >> hour >> min;
    min -= 45;
    if (min < 0)
    {
        min += 60;
        hour--;
        if (hour < 0)
            hour += 24;
    }
    cout << hour << " " << min;

    return 0;
}