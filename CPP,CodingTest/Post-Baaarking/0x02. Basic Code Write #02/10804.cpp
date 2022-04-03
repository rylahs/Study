// BaaarkingDog ���� �˰��� �н�
// 0x02. ���� �ڵ� �ۼ� ��� II
// 10804. ī�� ����ġ
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

    vector<int> v(20);
    
    //Init
    for (int i = 0; i < v.size(); i++)
        v[i] = i + 1;

    // Input
    int testCase = 10;
    for (int t = 0; t < testCase; t++)
    {
        int start, end;
        cin >> start >> end;

        reverse(v.begin() + start - 1, v.begin() + end);
    }


    // print
    for (auto& e : v)
        cout << e << " ";



    return 0;
}