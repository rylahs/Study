#include <stdio.h>

int main_if() {

	//int inputNumber = 0;
	//// 1 ~ 10 ������ ���ڸ� �Է� �޾Ƽ� ����, ���� ó��
	//printf("1 ~ 10 ������ ���� �Է� : ");
	//scanf_s("%d", &inputNumber);

	//if (inputNumber > 0 && inputNumber < 11) {
	//	printf("�Է� ���� ���� %d�̸� 1 ~ 10 ������ ���� �Դϴ�.\n", inputNumber);
	//}
	//else {
	//	printf("�Է� ���� ���� %d�̸� 1~ 10 ������ ������ �ƴմϴ�\n", inputNumber);
	//}
	//// 2���� ���ڸ� �Է� �޾Ƽ� ũ�� �۴� ���� ó��
	//
	int inputA, inputB = 0;
	printf("ù ��° ���� �Է� : ");
	scanf_s("%d", &inputA);
	printf("�� ��° ���� �Է� : ");
	scanf_s("%d", &inputB);

	if (inputA == inputB)
		printf("%d == %d�� ��ġ�մϴ�.", inputA, inputB);
	else if (inputA > inputB)
		printf("%d > %d�� %d�� �� Ů�ϴ�.", inputA, inputB, inputA);
	else
		printf("%d < %d�� %d�� �� Ů�ϴ�.", inputA, inputB, inputB);

	return 0;
}