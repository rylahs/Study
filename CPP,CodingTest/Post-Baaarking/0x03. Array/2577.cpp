// BaaarkingDog 실전 알고리즘 학습
// 0x03. Array
// 2577. 숫자의 개수
// Write : Rylah
// Date : 2022. 04. 03

#include <iostream>
#include <vector>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int res = a * b * c;
    vector<int> v(10);

    while (res != 0)
    {
        v[res % 10]++;

        res /= 10;
    }

    for (auto& e : v)
        cout << e << "\n";

    return 0;
}
