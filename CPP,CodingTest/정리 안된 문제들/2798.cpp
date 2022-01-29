#include <bits/stdc++.h>
using namespace std;

int main_2798(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, target;
    cin >> n >> target;
    vector<int> v;
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.emplace_back(input);
    }
    int max = -1;
    for (int i = 0; i < n - 2; i++)
    {
        if (max == target)
            break;
        for (int j = i + 1; j < n - 1; j++)
        {
            if (max == target)
                break;
            for (int k = j + 1; k < n; k++)
            {
                if (max == target)
                    break;
                if (max < (v[i] + v[j] + v[k]) && target >= (v[i] + v[j] + v[k]))
                    max = v[i] + v[j] + v[k];
                
            }
        }
    }
    cout << max;
    return 0;
}