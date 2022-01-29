// BOJ 15596. 정수 N개의 합
// https://www.acmicpc.net/problem/15596


#include <vector>
#include <iostream>
#include <numeric>
using namespace std;

long long sum(std::vector<int>& a) {
    long long ans = 0;
    ans = accumulate(a.begin(), a.end(), 0ll);
    return ans;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a;
    for (int i = 1; i < 101; i++)
        a.emplace_back(i);
    long long result;
    result = sum(a);
    cout << result << '\n';

    return 0;
}