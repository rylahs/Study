#include <bits/stdc++.h>
using namespace std;
int numArr[100002];
int main_1920(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> numArr[i];
    sort(numArr, numArr + n);

    int m;
    cin >> m;

    int start = 0;
    int end = n - 1;
    int location = 0;
    int mid;

    while (m--)
    {
        int idx;
        cin >> idx;
        location = 0;
        start = 0;
        end = n - 1;
        while (start <= end && location == 0) {

            mid = (start + end) / 2;
            if (numArr[mid] == idx) 
                location = 1;
            else if (numArr[mid] < idx) 
                start = mid + 1;
            else 
                end = mid - 1;
        }
        cout << location << '\n';

    }
    return 0;
}