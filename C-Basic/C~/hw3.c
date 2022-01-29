#include <stdio.h>

int main_hw3(void) {
	/*
	1. 1���� ���ڸ� �Է� �޾Ƽ� ¦��, Ȧ������ �Ǵ��ϴ� ���α׷�.
		(������ ������ ����ϸ� ����)
		-----------------------------
		 Ȧ¦ �Ǵ� ���α׷� v1.0
		-----------------------------
		���� �Է� => 10

		����� �Ʒ��߿� 1���� ���.
		1) �Է��� ���ڴ� Ȧ���Դϴ�.
		2) �Է��� ���ڴ� ¦���Դϴ�.

		[��ó] https://blog.naver.com/hack4ork/221689344636
	*/
	int number;
	printf("============ ���� 1 ============\n");
	printf("------------------------------------\n");
	printf("\tȦ¦ �Ǵ� ���α׷� v1.0\n");
	printf("------------------------------------\n");
	printf("���� �Է� => ");
	scanf_s("%d", &number);

	if (number % 2 == 0)
		printf("�Է��� ���ڴ� ¦���Դϴ�.\n");
	else
		printf("�Է��� ���ڴ� Ȧ���Դϴ�.\n");
	

	/*
	2. 2���� ���ڸ� �Է� �޾Ƽ� ũ��, �۴ٸ� ���ϴ� ���α׷�
		-----------------------------
		 ��� �� ���α׷� v1.0
		-----------------------------
		1. num1 �Է� => 10
		2. num2 �Է� => 5

		����� �Ʒ��� 3���߿� �ϳ��� ��� �ٶ�.
		1) num1�� num2���� ũ��.
		2) num2�� num1���� ũ��.
		3) num1�� num2�� ����.

		[��ó] https://blog.naver.com/hack4ork/221689344636
	*/
	int number1, number2;
	printf("\n\n============ ���� 2 ============\n");
	printf("------------------------------------\n");
	printf("\t��� �� ���α׷� v1.0\n");
	printf("------------------------------------\n");
	printf("1. num1 �Է� => ");
	scanf_s("%d", &number1);

	printf("2. num2 �Է� => ");
	scanf_s("%d", &number2);

	if (number1 > number2)
		printf("%d�� %d���� ũ��\n", number1, number2);
	else if (number1 < number2)
		printf("%d�� %d���� ũ��\n", number2, number1); 
	else
		printf("%d�� %d�� ����\n", number1, number2);


	/*
	3. 2���� ���ڸ� �Է¹޾Ƽ� +, -, X, / �����ڸ� ����ϴ� ������ ����.
		-----------------------------
		 ������ ���� ���α׷� v1.0
		-----------------------------
		1. Num1 �Է� => 10
		2. Num2 �Է� => 5

		3. ������ �Է�(+, -, *, /) => +

		����� �Ʒ��� ���·� ��� �ٶ�.
		10 + 5 = 15



		[��ó] https://blog.naver.com/hack4ork/221689344636
	*/
	int calcNum1, calcNum2;
	char calcCh;
	printf("\n\n============ ���� 3 ============\n");
	printf("------------------------------------\n");
	printf("\t������ ���� ���α׷� v1.0\n");
	printf("------------------------------------\n");
	printf("1. num1 �Է� => ");
	scanf_s("%d", &calcNum1);

	printf("2. num2 �Է� => ");
	scanf_s("%d", &calcNum2);

	printf("3. ������ �Է�(+, -, *, /) => ");
	getchar();
	scanf_s("%c", &calcCh, sizeof(char));
	if (calcCh == '+')
		printf("%d + %d = %d", calcNum1, calcNum2, calcNum1 + calcNum2);
	else if (calcCh == '-')
		printf("%d - %d = %d", calcNum1, calcNum2, calcNum1 - calcNum2);
	else if (calcCh == '*')
		printf("%d * %d = %d", calcNum1, calcNum2, calcNum1 * calcNum2);
	else if (calcCh == '/')
		printf("%d / %d = %d", calcNum1, calcNum2, calcNum1 / calcNum2);
	else {
		printf("�߸��� �����ڸ� �Է��߽��ϴ�.\n");
	}
	
	/*
	4. �⵵�� �Է¹޾Ƽ� ������ �����ϴ� ���α׷�.
		����1) �Է��� �⵵�� 4�� ������ �������� 0�̰� 100���� ������ 0�� �ƴϾ�� ��.
		����2) �Է��� �⵵�� 400���� ������ �������� 0 �̾�� ��.
		����3) ����1������ AND �������ڸ� ���.
		����4) ����1�� ����2�� OR �������ڸ� ���.
		-----------------------------
		 �⵵�� ���� ���� ���α׷� v1.0
		-----------------------------
		�⵵ �Է� => 2016



		����� �Ʒ��� 2���߿� �ϳ��� ��� �ٶ�.
		1) 2016���� ������ �ƴմϴ�.
		2) 2016���� �����Դϴ�.
		[��ó] https://blog.naver.com/hack4ork/221689344636
	*/
	int inputYear;
	
	printf("\n\n============ ���� 4 ============\n");
	printf("------------------------------------\n");
	printf("\t�⵵�� ���� ���� ���α׷� v1.0\n");
	printf("------------------------------------\n");
	printf("�⵵ �Է� => ");
	scanf_s("%d", &inputYear);

	if ((inputYear % 4 == 0 && inputYear % 100 != 0) || inputYear % 400 == 0)
		printf("%d���� �����Դϴ�.\n", inputYear);
	else
		printf("%d���� ������ �ƴմϴ�.\n", inputYear);
	/*
	5. ����, ����, ���� ������ �Է¹޾Ƽ� �հ� ����� ���Ͽ� ������ ����ϴ� ���α׷�.
		-----------------------------
		 ���� ���� ���α׷� v1.0
		-----------------------------
		 100 ~ 90 : A����
		  89 ~ 80 : B����
		  79 ~ 70 : C����
		  69 ~ 60 : D����
		  59 ~ 50 : E����
		  49 ~ 0  : F����
		-----------------------------

		[�Է� ����]
		1. ���� ���� �Է� => 100
		2. ���� ���� �Է� => 80
		3. ���� ���� �Է� => 90

		[��� ����]
		���� 270
		��� 90
		������ A�Դϴ�.
		[��ó] https://blog.naver.com/hack4ork/221689344636
	*/
	printf("\n\n============ ���� 5 ============\n");
	printf("------------------------------------\n");
	printf("\t���� ���� ���α׷� v1.0\n");
	printf("------------------------------------\n");
	printf("\t100 ~ 90 : A����\n");
	printf("\t 89 ~ 80 : B����\n");
	printf("\t 79 ~ 70 : C����\n");
	printf("\t 69 ~ 60 : D����\n");
	printf("\t 59 ~ 50 : E����\n");
	printf("\t 49 ~ 0  : F����\n");
	printf("------------------------------------\n");

	int korScoreInput, engScoreInput, mathScoreInput;
	printf("1. ���� ���� �Է� => ");
	scanf_s("%d", &korScoreInput);
	printf("2. ���� ���� �Է� => ");
	scanf_s("%d", &engScoreInput);
	printf("3. ���� ���� �Է� => ");
	scanf_s("%d", &mathScoreInput);
	int sumScore = korScoreInput + engScoreInput + mathScoreInput;
	double avgScore = sumScore / 3;
	printf("\n���� %d\n", sumScore);
	printf("��� %.2lf", avgScore);
	if (avgScore >= 90 && avgScore <= 100)
		printf("������ A�Դϴ�.\n");
	else if (avgScore >= 80 && avgScore <= 89)
		printf("������ B�Դϴ�.\n");
	else if (avgScore >= 70 && avgScore <= 79)
		printf("������ C�Դϴ�.\n");
	else if (avgScore >= 60 && avgScore <= 69)
		printf("������ D�Դϴ�.\n");
	else if (avgScore >= 50 && avgScore <= 59)
		printf("������ E�Դϴ�.\n");
	else if (avgScore < 50)
		printf("������ F�Դϴ�.\n");
	else
		printf("���� ������ ������ϴ�.\n");


	return 0;
}