// BaaarkingDog ���� �˰��� �н�
// 0x02. ���� �ڵ� �ۼ� ��� II
// 2562. �ִ�
// Write : Rylah
// Date : 2022. 04. 03

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 9;
    vector<int> v(n);

    for (size_t t = 0; t < v.size(); t++)
        cin >> v[t];
    
    cout << *max_element(v.begin(), v.end()) << "\n";
    cout << max_element(v.begin(), v.end()) - v.begin() + 1 << "\n";



    return 0;
}