// BaaarkingDog 실전 알고리즘 학습
// 0x03. Array
// 13300. 방 배정
// Write : Rylah
// Date : 2022. 04. 03

#include <iostream>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int student[2][7] = {  };

    // S : 0(Female) 1(Male)
    // Y : Year

    for (int i = 0; i < n; i++)
    {
        int S, Y;
        cin >> S >> Y;
        student[S][Y]++;
    }

    int roomCnt = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < 7; j++)
        {
            roomCnt += (student[i][j] / k);

            if (student[i][j] % k > 0)
                roomCnt++;
        }
        
    }
    cout << roomCnt << "\n";


    return 0;
}
