#include <stdio.h>

int main_calc() {
	//// 2���� ���ڿ� ��Ģ ������ (+,-,*,/)�� �Է¹ޱ�
	//// ������ ���� ���α׷�
	//double inputA, inputB;
	//char calcCh;

	//printf("============= ���� =============\n");
	//printf("ù ��° ���� �Է� : ");
	//scanf_s("%lf", &inputA);
	//printf("���ϴ� ������ ������ (+, -, *, /) :  ");
	//scanf_s(" %c", &calcCh);
	//printf("�� ��° ���� �Է� : ");
	//scanf_s("%lf", &inputB);

	//if (calcCh == '+')
	//	printf("\n%d %c %d = %d\n", (int)inputA, calcCh, (int)inputB, (int)(inputA + inputB));
	//else if (calcCh == '-')
	//	printf("\n%d %c %d = %d\n", (int)inputA, calcCh, (int)inputB, (int)(inputA - inputB));
	//else if (calcCh == '*')
	//	printf("\n%d %c %d = %d\n", (int)inputA, (int)calcCh, (int)inputB, (int)(inputA * inputB));
	//else if (calcCh == '/')
	//	printf("\n%d %c %d = %.3lf\n", (int)inputA, calcCh, (int)inputB, inputA / inputB);
	//else {
	//	printf("+, -, *, / ���� ������ �߸��Ǿ����ϴ�.\n");
	//	printf("========== ���α׷� ���� ==========\n");
	//	exit(0);
	//}
	//printf("========== ���α׷� ���� =========\n");
	//return 0;

	// ���� ���� ���α׷�
	// 1. �Է��� �⵵�� 4�� ������ �������� 0�̰�,  100���� ������ 0�� �ƴ�.
	// 2. �Է��� �⵵�� 400���� ������ �������� 0.
	int inputYear;
	printf(" ������ �Ǻ��ϴ� ���α׷��Դϴ�.\n");
	printf(" ������ �Է����ּ��� : ");
	scanf_s("%d", &inputYear);
	
	if ((inputYear % 4 == 0) && (inputYear % 100 != 0) || (inputYear % 400 == 0))
		printf(" %d���� �����Դϴ�! \n", inputYear);
	else
		printf(" %d���� ������ �ƴմϴ�! \n", inputYear);

	return 0;
}