#include <stdio.h>

int addSum(int n1, int n2)
{
	return n1 + n2;
}
int addSum2(int n1, int n2)
{
	int sum = n1 + n2;
	return sum;
}
int sub(int n1, int n2)
{
	return n1 - n2;
}
int main_func4(void)
{
	// 1. void �Լ���()
	// 2. void �Լ���(�Ű�����)
	// 3. ����Ÿ�� �Լ���()
	// 4. ����Ÿ�� �Լ���(�Ű�����)

	// �Լ����� 4��°
	// ����Ÿ�� �Լ��� �Ű�����
	int n = addSum(10, 20);
	printf("���� 1: %d\n���� 2: %d\n", n , addSum2(10, 200));
	int n2 = sub(500, 200);
	printf("500 - 200 = %d\n", n2);
	return 0;
}