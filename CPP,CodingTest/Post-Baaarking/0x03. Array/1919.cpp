// BaaarkingDog 실전 알고리즘 학습
// 0x03. Array
// 1919. 애너그램 만들기
// Write : Rylah
// Date : 2022. 04. 03

#include <iostream>
#include <string>
using namespace std;



int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string ori, comp;
    cin >> ori >> comp;

    int alpha[26] = { };
    for (int i = 0; i < ori.length(); i++)
        alpha[ori[i] - 'a']++;
    
    for (int i = 0; i < comp.length(); i++)
        alpha[comp[i] - 'a']--;
    
    int modCnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] != 0)
            modCnt += abs(alpha[i]);
    }

    cout << modCnt << "\n";

    return 0;
}
