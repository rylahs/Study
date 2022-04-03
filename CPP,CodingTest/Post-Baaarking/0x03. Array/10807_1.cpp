// BaaarkingDog 실전 알고리즘 학습
// 0x03. Array
// 10807. 개수 세기
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

    int n;
    cin >> n;
    vector<int> v(n, 0);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int target;
    cin >> target;

    if (lower_bound(v.begin(), v.end(), target) == v.end())
        cout << 0 << "\n";
    else
    {
        cout << (upper_bound(v.begin(), v.end(), target) - v.begin()) - (lower_bound(v.begin(), v.end(), target) - v.begin());
    }
    



    return 0;
}
