#include <stdio.h>

int main_1124(void) {
	//������
	// % ������ ������
	int num1 = 10;
	int num2 = 3;
	int res = num1 % num2;
	printf("������ : %d\n", res);

	// �� ������ ������� �� 1 , ���� 0
	// > < >= <= ==
	printf("%d\n", num1 > num2);
	printf("%d\n", num1 == num2);

	// ���տ�����
	// +=
	int test = num1 + num2;
	printf("�� : %d\n", test);
	test = test + num1;
	printf("�� : %d\n", test);
	test += num1;
	printf("�� : %d\n", test);

	//�� ������ (��, ����)
	//�񱳿����ڿ� �����ؼ� ���� ����Ѵ�.
	// &&(AND) , ||(OR) !(NOT)

	// ��Ʈ ������
	// ��ǻ���� �ּ� ���� : ��Ʈ (������ 0, 1 ǥ��)
	// 8bit = 1byte
	// 1024byte = 1kb
	// 1024kb = 1mb
	// 1024mb = 1gb
	// 1024gb = 1tb
	// 1024tb = 1pt

	// ���� ������
	int num3 = 20;
	char ch = (num3 > 39) ? 'A' : 'Z';
	printf("%c\n", ch);

	return 0;
}