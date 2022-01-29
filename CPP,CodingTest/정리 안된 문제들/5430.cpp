// BOJ 5430. AC
// https://www.acmicpc.net/problem/5430

#include <bits/stdc++.h>
using namespace std;
void init(string& arrStr, deque<int>& d)
{
    int number = 0;
    for (int i = 1; i + 1 < arrStr.size(); i++) // str[0] : [ 무시
    {
        if (arrStr[i] == ',') // ,를 만나면 숫자가 완료됨
        {
            d.emplace_back(number);
            number = 0; // 숫자 입력이 완료되어서 리셋
        }
        else // 다른 것은 숫자뿐이다.
            number = 10 * number + (arrStr[i] - '0');
    }
    if (number != 0)
        d.emplace_back(number);
}

void print_deque(deque<int>& d)
{
    cout << "[";
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i];
        if (i + 1 != d.size())
            cout << ",";
    }
    cout << "]\n";
}


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        string cmdStr, arrStr;
        int arrNum;
        cin >> cmdStr >> arrNum >> arrStr;
        deque<int> DQ;

        // Deque Insert
        init(arrStr, DQ);
        bool rev = false;
        bool isTrue = false;
        for (auto e : cmdStr)
        {
            if (e == 'R')
            {
                if (rev)
                    rev = false;
                else
                    rev = true;
            }

            if (e == 'D')
            {
                if (DQ.empty())
                {
                    isTrue = true;
                    break;
                }
                if (rev)
                    DQ.pop_back();
                else
                    DQ.pop_front();
                
            }


        }
        if (isTrue == true)
        {
            cout << "error" << '\n';
            continue;
        }
        else
        {
            if (rev)
                reverse(DQ.begin(), DQ.end());
            print_deque(DQ);
        }
    }

    return 0;
}