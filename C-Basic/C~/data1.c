#include <stdio.h>

int main(void) {

	// ���� : ������ �����ϴ� ������ �̸�ǥ(��ġ ����)
	// int(Integer) : ����
	/// double(Double) : �Ǽ�
	// char(Character) : ����
	// char*(Character Pointer) : ���ڿ�
	// ����(���� ������ ������ ����

	int num = 100;//���� ���� ����(����)
	num = 200; // �̹� ������� ������ ���� ���ο� ���� �ο�
	printf("���� : %d, %d\n", num, 100); 

	double dNum = 10.2; // �Ǽ� ���� ����
	printf("�Ǽ� : %.2lf\n", dNum);

	char ch = 'A'; // ���� ���� ����
	//char ch = 'B'; // ������ �̸��� ���������̹Ƿ� ���� �߻�
	printf("���� ��� : %c\n", ch);

	char* str = "ȫ�浿"; // ���ڿ� ������ ptr ������ ������ ����
	printf("���ڿ� ��� : %s\n", str);

	const char* str1 = "ȫ�浿"; // ���ڿ� ������ ptr ������ ������ ����
	printf("���ڿ� ��� : %s\n", str1);

	//��� ���� : ���� ���ϸ� ������ �Ұ���
	const int num2 = 1000;
	// num2 = 2000; //const�� �����ؼ� ���� �� �� ����.
	printf("Num2 : %d\n", num2);
	return 0;

}