#include <stdio.h>

int main(void) {
	//int inputDay = 0;
	//printf("������ �Է����ּ���\n");
	//printf("1:��, 2:ȭ, 3:��, 4:��, 5:��, 6:��, 7:��\n");
	//printf("==> ");
	//scanf_s("%d", &inputDay);

	//switch (inputDay)
	//{
	//case 1:
	//	printf("Monday\n");
	//	break;
	//case 2:
	//	printf("Tuesday\n");
	//	break;
	//case 3:
	//	printf("Wednesday\n");
	//	break;
	//case 4:
	//	printf("Tuersday\n");
	//	break;
	//case 5:
	//	printf("Friday\n");
	//	break;
	//case 6:
	//	printf("Saturday\n");
	//	break;
	//case 7:
	//	printf("Sunday\n");
	//	break;
	//default:
	//	printf("�߸� �ԷµǾ����ϴ�.\n");
	//	break;
	//}
	//return 0;

	
	/*
	int inputMenu;
	printf("�޴��� �������ּ��� (1. ��ġ�, 2. �����, 3. ���κ��) : ");
	scanf_s("%d", &inputMenu);
	switch(inputMenu) {
	case 1:
		printf("��ġ��� �����߽��ϴ�. 5000���� �����ϼ���\n");
		break;
	case 2:
		printf("������� �����߽��ϴ�. 6000���� �����ϼ���\n");
		break;
	case 3:
		printf("���κ���� �����߽��ϴ�. 7000���� �����ϼ���\n");
		break;
	default:
		printf("�߸��� �޴� �����Դϴ�.\n");
		break;
	}
	*/
	//���� 1 2���� ���ڿ� ��Ģ ������ (+,-,*,/)�� �Է¹ޱ�
	// ������ ���� ���α׷� (switch ����)
	/*
	double inputA, inputB;
	char calcCh;

	printf("============= ���� =============\n");
	printf("ù ��° ���� �Է� : ");
	scanf_s("%lf", &inputA);
	printf("���ϴ� ������ ������ (+, -, *, /) :  ");
	scanf_s(" %c", &calcCh);
	printf("�� ��° ���� �Է� : ");
	scanf_s("%lf", &inputB);

	switch (calcCh) {
	case '+':
		printf("\n%.0lf %c %.0lf = %.0lf\n", inputA, calcCh, inputB, inputA + inputB);
		break;
	case '-':
		printf("\n%.0lf %c %.0lf = %.0lf\n", inputA, calcCh, inputB, inputA - inputB);
		break;
	case '*':
		printf("\n%.0lf %c %.0lf = %.0lf\n", inputA, calcCh, inputB, inputA * inputB);
		break;
	case '/':
		printf("\n%.0lf %c %.0lf = %.2lf\n", inputA, calcCh, inputB, inputA / inputB);
		break;
	default:
		printf("+, -, *, / ���� ������ �߸��Ǿ����ϴ�.\n");
		printf("========== ���α׷� ���� ==========\n");
		exit(0);
	}

	printf("========== ���α׷� ���� =========\n");
	return 0;
	*/
	// ����2 1~10 ���ڸ� �Է� �޾Ƽ� Ȧ�� ¦�� �����ϴ� ���α׷�
	// if + switch use
	// num % 2 == 0 (even)
	int inputNum;
	printf("============= Ȧ�� ¦�� ���� =============\n");
	printf("���� �Է� (1 ~ 10) : ");
	scanf_s("%d", &inputNum);
	if (inputNum >= 1 && inputNum <= 10) {
		switch (inputNum % 2) {
		case 0:
			printf("���ڴ� ¦���Դϴ�\n");
			break;
		case 1:
			printf("���ڴ� Ȧ���Դϴ�\n");
			break;
		default:
			printf("�� �� �����ϴ�.\n");
			break;
		}
	}
	else
		printf("���� ������ ���� �ʽ��ϴ�. \n");

	printf("========== ���α׷� ���� ==========\n");
}
