// BaaarkingDog ���� �˰��� �н�
// 0x02. ���� �ڵ� �ۼ� ��� II
// 10869. ��Ģ����
// Write : Rylah
// Date : 2022. 04. 02

#include <iostream>
using namespace std;

void calc(int& a, int& b) // Call by Reference
{
	cout << a + b << "\n";
	cout << a - b << "\n";
	cout << a * b << "\n";
	cout << a / b << "\n";
	cout << a % b << "\n";
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;
	
	calc(a, b);

	return 0;
}