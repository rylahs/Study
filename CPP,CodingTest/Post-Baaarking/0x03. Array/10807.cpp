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
    vector<int> v(202, 0);

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v[input + 100]++;
    }

    int target;
    cin >> target;

    cout << v[target + 100] << "\n";



    return 0;
}
