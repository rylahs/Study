// BaaarkingDog 실전 알고리즘 학습
// 0x03. Array
// 1475. 방 번호
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

    vector<int> v(10, 0); // 0 ~ 9 담을 Vector
    int input; // Range 1,000,000 << int
    cin >> input;

    while (input != 0)
    {
        v[input % 10]++;
        input /= 10;
    }

    int res = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        if (i == 6 || i == 9)
            continue;
        res = max(res, v[i]);
    }

    int tmp = (v[6] + v[9]) / 2 + (v[6] + v[9]) % 2;
    
    res = max(res, tmp);

    cout << res << "\n";

    return 0;
}
