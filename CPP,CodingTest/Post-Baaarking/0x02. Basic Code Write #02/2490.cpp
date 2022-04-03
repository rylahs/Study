// BaaarkingDog 실전 알고리즘 학습
// 0x02. 기초 코드 작성 요령 II
// 2490. 윷놀이
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
	// 0 : 배 , 1 : 등
	// 이건 배의 갯수
	// 0 : 모 , 1 : 도, 2 : 개, 3 : 걸, 4 : 윷
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