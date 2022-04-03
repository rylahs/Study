// BaaarkingDog 실전 알고리즘 학습
// 0x03. Array
// 10808. 알파벳 개수
// Write : Rylah
// Date : 2022. 04. 03

#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    vector<int> alpha(26, 0);
    
    for (size_t i = 0; i < str.length(); i++)
    {
        alpha[str[i] - 'a']++;
    }

    for (auto& e : alpha)
        cout << e << " ";

    return 0;
}
