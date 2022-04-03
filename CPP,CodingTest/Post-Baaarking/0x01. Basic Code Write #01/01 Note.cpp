#include <iostream>
using namespace std;
// 1. ���� �ڷ���
// Char : 1 Byte (1 bit)
// �ǹ̴�?
// 0 0 0 0 0 0 0 0 : 8���� �� ĭ�� 1�� 0�� �̿��ؼ� ���ڸ� �ο��Ѵ�.
// 2^-7 ��ȣ��Ʈ 
// ��� unsigned char : 0 ~ 255
//               char : -128 ~ 127
// short 2 byte(16bit) : 2^15 - 1 �� ǥ�� ����
// int 4 byte (32bit) : 2^31 - 1 �� ǥ�� ���� (2.1 * 10^9)
// long long (64bit) : 2^63 - 1 �� ǥ�� ���� ( 9.2 * 10.18)


// 2. �Ǽ� �ڷ���
// �Ǽ��� ���� ���� ���������� �ݵ�� ������ �߻��Ҽ� �ۿ� ����.
// double�� long long ������ �Ժη� ������ �ȵȴ�.
// �Ǽ��� ���� ���� ��ȣ�� ����ϸ� �ȵȴ�.
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a = 2000000000 * 2;
	cout << a << "\n";
	// result : -294967296

	if (0.1 + 0.1 + 0.1 == 0.3)
		cout << "true" << "\n";
	else
		cout << " No!!! " << "\n";

	double k = 1000000000000000001;
	double l = 1000000000000000000;

	if (k == l)
		cout << "wow" << "\n";
	else
		cout << " Oh.... " << "\n";

	double m = 0.1 + 0.1 + 0.1;
	double n = 0.3;

	// float�� ��ȿ ���� 6�ڸ�
	// double�� ��ȿ���� 15�ڸ�

	if (m == n)
		cout << "m == n !!!!" << "\n";
	if (abs(m - n) < 1e-12)
		cout << "same!!!! " << "\n";
	else
		cout << " N.........." << "\n";

	return 0;
}