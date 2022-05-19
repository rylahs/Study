#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> s(8, 0);
    
    for (int i = 0; i < 8; i++)
        cin >> s[i];

    bool isAsc = true, isDesc = true;

    // 0-idx case
    if (s[0] > 1 && s[0] < 8)
    {
        isDesc = false;
        isAsc = false;
    }
    if (s[0] == 1)
        isDesc = false;

    if (s[0] == 8)
        isAsc = false;

    int idx = 1;

    while (idx < s.size())
    {
        // mixed 종료
        if (isDesc == false && isAsc == false)
            break;

        // 나머지 인덱스 처리
        if (isAsc)
        {
            if (s[idx] == (idx + 1))
            {
                idx++;
                continue;
            }
            isAsc = false;
        }

        if (isDesc)
        {
            if (idx + s[idx] == 8)
            {
                idx++;
                continue;
            }
            isDesc = false;
        }
        
    }
    if (isAsc)
        cout << "ascending\n";

    if (isDesc)
        cout << "descending\n";

    if (!isAsc && !isDesc)
        cout << "mixed\n";

    return 0;
}
