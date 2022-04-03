// BaaarkingDog 실전 알고리즘 학습
// 0x02. 기초 코드 작성 요령 II
// 2752. 세수정렬
// Write : Rylah
// Date : 2022. 04. 02

#include <iostream>
#include <set>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	set<int> st;

	for (int i = 0; i < 3; i++)
	{
		int a;
		cin >> a;
		st.emplace(a);
	}

	for (auto& e : st)
		cout << e << " ";


	return 0;
}