#include <stdio.h>
// �Լ� ������ Ÿ�� ����(C��)
int funcRtn1();
int funcRtn2();

int main_fucn3(void)
{
	// 3��° �Լ� ����
	// ���� ���� Ÿ�� �Լ���()
	// �Լ��� ������ �� � ���� ��ȯ��.

	int n = funcRtn1();
	printf("�Լ��� ���� ���� ����(��ȯ) �� : %d\n", n);
	int n2 = funcRtn2();
	printf("�Լ� 2�κ��� ���� ����(��ȯ) �� : %d\n", n2);

	printf("���� ���α׷� ����\n");
	return 0;
}
int funcRtn1()
{
	return 100;
}
int funcRtn2()
{
	int n = 100 + 20;
	return n;
}