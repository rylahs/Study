// BaaarkingDog ���� �˰��� �н�
// 0x02. ���� �ڵ� �ۼ� ��� II
// 2753. ����
// Write : Rylah
// Date : 2022. 04. 02

#include <iostream>
#include <set>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	
	int year;
	cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		cout << 1 << "\n";
	else
		cout << 0 << "\n";

	return 0;
}