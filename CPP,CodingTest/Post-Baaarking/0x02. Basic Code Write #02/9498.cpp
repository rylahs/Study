// BaaarkingDog ���� �˰��� �н�
// 0x02. ���� �ڵ� �ۼ� ��� II
// 9498. ���� ����
// Write : Rylah
// Date : 2022. 04. 02

#include <iostream>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int score;
	cin >> score;

	if (score <= 100 && score >= 90)
		cout << "A" << "\n";
	else if (score <= 89 && score >= 80)
		cout << "B" << "\n";
	else if (score <= 79 && score >= 70)
		cout << "C" << "\n";
	else if (score <= 69 && score >= 60)
		cout << "D" << "\n";
	else
		cout << "F" << "\n";
	return 0;
}