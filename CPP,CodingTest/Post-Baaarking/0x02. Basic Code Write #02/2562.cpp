// BaaarkingDog 실전 알고리즘 학습
// 0x02. 기초 코드 작성 요령 II
// 2562. 최댓값
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