// BaaarkingDog ���� �˰��� �н�
// 0x02. ���� �ڵ� �ۼ� ��� II
// 2752. ��������
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