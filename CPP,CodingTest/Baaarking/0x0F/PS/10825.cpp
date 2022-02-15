// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 10825. 국영수
// https://www.acmicpc.net/problem/10825
// https://www.acmicpc.net/source/38976528

#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int kor;
    int eng;
    int math;
};

bool compare(const Student& a, const Student& b)
{
    if (a.kor != b.kor)
        return a.kor > b.kor;

    else
    {
        if (a.eng != b.eng)
            return a.eng < b.eng;

        else
        {
            if (a.math != b.math)
                return a.math > b.math;
            else
            {
                return a.name < b.name;
            }
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<Student> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;

    sort(v.begin(), v.end(), compare);

    for (auto& e : v)
        cout << e.name << "\n";
    
    return 0;
}