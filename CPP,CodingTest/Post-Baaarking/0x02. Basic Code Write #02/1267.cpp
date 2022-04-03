// BaaarkingDog ���� �˰��� �н�
// 0x02. ���� �ڵ� �ۼ� ��� II
// 1267. �ڵ��� ���
// Write : Rylah
// Date : 2022. 04. 03

#include <iostream>
#include <vector>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n);

	

	for (int i = 0; i < n; i++)
		cin >> v[i];

	int yCall = 0;
	int mCall = 0;

	for (int i = 0; i < n; i++)
	{
		yCall += (v[i] / 30) * 10 + 10;
		mCall += (v[i] / 60) * 15 + 15;
	}

	if (yCall < mCall)
		cout << "Y" << " " << yCall << "\n";
	else if (yCall > mCall)
		cout << "M" << " " << mCall << "\n";
	else
		cout << "Y M " << yCall << "\n";



	return 0;
}