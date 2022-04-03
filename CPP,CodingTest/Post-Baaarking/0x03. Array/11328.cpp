// BaaarkingDog 실전 알고리즘 학습
// 0x03. Array
// 11328. Strfry
// Write : Rylah
// Date : 2022. 04. 03

#include <iostream>
#include <string>
#include <numeric>
using namespace std;



int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        string origin, comp;
        cin >> origin >> comp;
        
        int alpha[26] = {};
        for (int i = 0; i < origin.length(); i++)
            alpha[origin[i] - 'a']++;
        

        for (int i = 0; i < comp.length(); i++)
            alpha[comp[i] - 'a']--;

        bool isZero = true;
        for (int i = 0; i < 26; i++)
        {
            if (alpha[i] != 0)
            {
                isZero = false;
                break;
            }
        }
        if (isZero)
            cout << "Possible" << "\n";
        else
            cout << "Impossible" << "\n";

    }
    
    return 0;
}
