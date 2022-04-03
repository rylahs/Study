// BaaarkingDog ���� �˰��� �н�
// 0x02. ���� �ڵ� �ۼ� ��� II
// 2480. �ֻ��� ����
// Write : Rylah
// Date : 2022. 04. 02

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> v(7, 0);

	int input;
	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		v[input]++;
	}
	int maxEqualIndex = 0;
	int maxEqualCount = 0;
	for (int i = 1; i <= 6; i++)
	{
		if (v[i] >= maxEqualCount)
		{
			maxEqualCount = v[i];
			maxEqualIndex = i;
		}
		
	}

	int result = 0;
	switch(maxEqualCount)
	{
	case 3:
		result = 10000 + maxEqualIndex * 1000;
		break;
	case 2:
		result = 1000 + maxEqualIndex * 100;
		break;
	case 1:
		result = maxEqualIndex * 100;
		break;
	}

	cout << result << "\n";
	return 0;
}