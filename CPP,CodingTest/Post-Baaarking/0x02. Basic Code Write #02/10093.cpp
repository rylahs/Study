// BaaarkingDog 실전 알고리즘 학습
// 0x02. 기초 코드 작성 요령 II
// 10093. 숫자
// Write : Rylah
// Date : 2022. 04. 03

#include <iostream>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long a, b;
	cin >> a >> b;

	if (a > b)
		swap(a, b);

	if (a != b)
	{
		long long dist = b - a - 1;
		cout << dist << "\n";

		for (long long i = a + 1; i < b; i++)
			cout << i << " ";
		cout << "\n";
	}
	else
		cout << 0 << "\n";
	return 0;
}