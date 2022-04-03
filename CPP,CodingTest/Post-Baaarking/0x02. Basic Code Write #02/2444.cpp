// BaaarkingDog 실전 알고리즘 학습
// 0x02. 기초 코드 작성 요령 II
// 2444. 별 찍기 - 7
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
        for (int j = 0; j < input - i - 1; j++)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << "\n";
    }

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < i + 1; j++)
            cout << " ";
        for (int j = (2 * (input - i - 2)) + 1; j > 0; j--)
            cout << "*";
        cout << "\n";
    }

    return 0;
}