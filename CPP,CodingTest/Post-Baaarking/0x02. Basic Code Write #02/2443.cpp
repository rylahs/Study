// BaaarkingDog ���� �˰��� �н�
// 0x02. ���� �ڵ� �ۼ� ��� II
// 2443. �� ��� - 6
// Write : Rylah
// Date : 2022. 04. 03

#include <iostream>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int input;
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = (2 * (input - i - 1)) + 1; j > 0; j--)
            cout << "*";
        cout << "\n";
    }

    return 0;
}