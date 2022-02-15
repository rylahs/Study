// 0x0F. 정렬 II
// Written by : Rylah
// Date : 2022.02.12
// 10825. 국영수
// https://www.acmicpc.net/problem/10825
// https://www.acmicpc.net/source/38976528

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    vector<tuple<int, int, int, string>> students;
    while (N--) {
        string name;
        int kor, eng, math;
        cin >> name >> kor >> eng >> math;
        students.push_back({ -kor, eng, -math, name });
    }
    sort(students.begin(), students.end());
    for (auto& s : students)
        cout << get<3>(s) << '\n';
}