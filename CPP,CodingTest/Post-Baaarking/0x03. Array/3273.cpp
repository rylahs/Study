// BaaarkingDog 실전 알고리즘 학습
// 0x03. Array
// 3273. 두 수의 합
// Write : Rylah
// Date : 2022. 04. 03

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; // 1 <= n <= 100000
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int lhsIdx = 0;
    int rhsIdx = n - 1;

    int target;
    cin >> target;

    int findCnt = 0;
    while (lhsIdx < rhsIdx)
    {
        if (target == (v[lhsIdx] + v[rhsIdx]))
        {
            findCnt++;
            lhsIdx++;
            rhsIdx--;
            continue;
        }
        else if (target > v[lhsIdx] + v[rhsIdx])
        {
            lhsIdx++;
            continue;
        }
        else if (target < v[lhsIdx] + v[rhsIdx])
        {
            rhsIdx--;
            continue;
        }


    }

    cout << findCnt << "\n";


    return 0;
}
