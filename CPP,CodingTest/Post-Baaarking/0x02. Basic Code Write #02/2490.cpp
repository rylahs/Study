// BaaarkingDog ���� �˰��� �н�
// 0x02. ���� �ڵ� �ۼ� ��� II
// 2490. ������
// Write : Rylah
// Date : 2022. 04. 02

#include <iostream>
#include <vector>

using namespace std;

enum Yut {
	MO = 0,
	DO,
	GAE,
	GIRL,
	YUT,
};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	// 0 : �� , 1 : ��
	// �̰� ���� ����
	// 0 : �� , 1 : ��, 2 : ��, 3 : ��, 4 : ��
	int testCase = 3;
	for (int t = 0; t < testCase; t++)
	{
		int cnt = 0;
		int input;
		for (int i = 0; i < 4; i++)
		{			
			cin >> input;
			if (input == 0)
				cnt++;
		}
		

		switch (cnt)
		{
		case YUT:
			cout << "D" << "\n";
			break;
		case GIRL:
			cout << "C" << "\n";
			break;
		case GAE:
			cout << "B" << "\n";
			break;
		case DO:
			cout << "A" << "\n";
			break;
		case MO:
			cout << "E" << "\n";
			break;
		}
	}

	return 0;
}