// ���� 1. �� ���� ������ ���ڷ� ���� �޾Ƽ� �� �� ���� ū ���� ��ȯ�ϴ� �Լ��� ���� ���� ���� ��ȯ�ϴ� �Լ��� �����غ���.
//        �׸��� �� �Լ����� ȣ���ϴ� ������ main �Լ��� �ۼ��غ���.

#include <stdio.h>

int maxNum(int a, int b, int c) { // MAX ���� ��ȯ
	if (a > b) // a b ���ؼ� a�� ũ�� 
		return (a > c) ? a : c; // a c�� ���ؼ� ū ���� ��ȯ
	else // b�� ũ��
		return (b > c) ? b : c; // b c�� ���ؼ� ū ���� ��ȯ
}

int minNum(int a, int b, int c) { // MIN ���� ��ȯ 
	if (a < b) // a b ���ؼ� a�� ������
		return (a < c) ? a : c; // a c ���ؼ� ���� �� ��ȯ
	else // b�� ������
		return (b < c) ? b : c; // b c ���ؼ� ���� �� ��ȯ
}
int main_1(void)
{
	int inputnum1, inputnum2, inputnum3;
	printf("�� ������ �Է¹޾� ���� ū ���� ���� ���� ���� ����մϴ�.\n");
	printf("�� ���� �Է����ּ��� : ");

	scanf_s("%d%d%d", &inputnum1, &inputnum2, &inputnum3);

	printf("���� ū ���� %d �Դϴ�.\n", maxNum(inputnum1, inputnum2, inputnum3));
	printf("���� ���� ���� %d �Դϴ�.\n", minNum(inputnum1, inputnum2, inputnum3));
}

