#include <stdio.h>

int main_hw4(void) {
	/*
	1. �Ʒ��� �޴��� �����Ͽ� ���.
		����1) �޴� ������ ���ڷ� �Է� ó��.
		����2) ���α׷� ����� �Ʒ��� ���� �������� �ϱ� �ٶ�.

		-----------------------------
		 �Ĵ� �޴� �ڵ� �ֹ� ���α׷� v1.0
		-----------------------------
		���ϴ� �Ļ縦 �����ϼ���.

		a. ��ġ� : 5,000��
		b. ����� : 5,000��
		c. Į����   : 4,500��
		d. ��ġ���� : 4,000��
		e. �����   : 5,000��

		-----------------------------
		�޴��� �����ϼ��� : c
		������� �ֹ��߽��ϴ�.

		[��ó] https://blog.naver.com/hack4ork/221690105166
	*/
	char selectMenuCalc;
	printf("============ ���� 1 ============\n");
	printf("------------------------------------\n");
	printf("\t�Ĵ� �޴� �ڵ� �ֹ� ���α׷� v1.0\n");
	printf("------------------------------------\n");
	printf("���ϴ� �Ļ縦 �����ϼ���.\n\n");
	printf("a. ��ġ� : 5,000��\n");
	printf("b. ����� : 5,000��\n");
	printf("c. Į����   : 4,500��\n");
	printf("d. ��ġ���� : 4,000��\n");
	printf("e. �����   : 5,000��\n");

	printf("�޴��� �����ϼ��� : ");
	scanf_s("%c", &selectMenuCalc, 1);

	switch (selectMenuCalc) {
	case 'a':
		printf("��ġ��� �ֹ��߽��ϴ�.\n");
		break;
	case 'b':
		printf("������� �ֹ��߽��ϴ�.\n");
		break;
	case 'c':
		printf("Į������ �ֹ��߽��ϴ�.\n");
		break;
	case 'd':
		printf("��ġ������ �ֹ��߽��ϴ�.\n");
		break;
	case 'e':
		printf("������� �ֹ��߽��ϴ�.\n");
		break;
	default:
		printf("�ùٸ� �޴��� �������ּ��� \n");
		break;
	}
	/*
	 2. 2���� ���ڿ� ��Ģ������(+, -, X, /)�� �Է¹޾Ƽ� ����ϴ� ���� ���α׷�.
		-----------------------------
		 ������ ���� ���α׷� v1.0
		-----------------------------
		1. Num1 �Է� => 10
		2. Num2 �Է� => 5
		3. ������ �Է� => X

		10 X 5 = 50
		

		[��ó] https://blog.naver.com/hack4ork/221690105166
	*/
	int calcNum1, calcNum2;
	char calcCh;
	printf("\n\n============ ���� 2 ============\n");
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
	switch (calcCh) {
	case '+':
		printf("%d + %d = %d", calcNum1, calcNum2, calcNum1 + calcNum2);
		break;
	case '-':
		printf("%d - %d = %d", calcNum1, calcNum2, calcNum1 - calcNum2);
		break;
	case '*':
		printf("%d * %d = %d", calcNum1, calcNum2, calcNum1 * calcNum2);
		break;
	case '/':
		printf("%d / %d = %d", calcNum1, calcNum2, calcNum1 / calcNum2);
		break;
	}
	/*
	3. ���Ǳ⿡�� ��踦 �����Ͽ� ����ϴ� ���α׷�.
		����1) ���Ǳ⿡ �Է��� �ݾ׿� ���� �Ž����� ó�� �ʿ�.

		---------------------------- -
		��� ���Ǳ� ���α׷� v1.0
		---------------------------- -
		���ϴ� ������� �޴����� �����ϼ���.

		1. ���� ��� ����   6,000��
		2. ���� ����� ���  5,000��
		3. ���� ���   4,500��
		4. ���� ������  4,500��
		5. ���� ȭ��Ʈ  4,500��
		---------------------------- -
		��踦 �����ϼ��� = > 5
		���� ȭ��Ʈ�� �����ϼ̽��ϴ�.
		---------------------------- -
		��� �ݾ��� �Ա��ϼ��� = > 10, 000
		���� ȭ��Ʈ�� �����߽��ϴ�.�Ž����� 5, 500���� ��������.
		[��ó] https://blog.naver.com/hack4ork/221690105166
	*/
	int selectVendNum;
	printf("\n\n============ ���� 3 ============\n");
	printf("------------------------------------\n");
	printf("\t��� ���Ǳ� ���α׷� v1.0\n");
	printf("------------------------------------\n");
	printf("���ϴ� ������� �޴����� �����ϼ���.\n\n");
	printf("1. ���� ��� ����    6,000��\n");
	printf("2. ���� ����� ���  5,000��\n");
	printf("3. ���� ���        4,500��\n");
	printf("4. ���� ������      4,500��\n");
	printf("5. ���� ȭ��Ʈ      4,500��\n");
	printf("------------------------------------\n");
	printf("��踦 �����ϼ��� => ");
	scanf_s("%d", &selectVendNum);
	switch (selectVendNum) {
	case 1:
		printf("���� ��� ������ �����ϼ̽��ϴ�.\n");
		break;
	case 2:
		printf("���� ����� ��带 �����ϼ̽��ϴ�.\n");
		break;
	case 3:
		printf("���� ��縦 �����ϼ̽��ϴ�.\n");
		break;
	case 4:
		printf("���� �������� �����ϼ̽��ϴ�.\n");
		break;
	case 5:
		printf("���� ȭ��Ʈ�� �����ϼ̽��ϴ�.\n");
		break;
	default:
		printf("�߸��� ��ȣ�� �����ϼ̽��ϴ�.\n");
	}
	int inputMoney;
	printf("------------------------------------\n");
	printf("��� �ݾ��� �Ա��ϼ��� => ");
	scanf_s("%d", &inputMoney);
	switch (selectVendNum) {
	case 1:
		if (inputMoney >= 6000) {
			printf("���� ��� ������ �����߽��ϴ�. �Ž����� %d���� ��������.\n", inputMoney - 6000);
		}
		else {
			printf("���� ���ڶ��ϴ�.\n");
		}
		break;
	case 2:
		if (inputMoney >= 5000) {
			printf("���� ����� ��带 �����߽��ϴ�. �Ž����� %d���� ��������.\n", inputMoney - 5000);
		}
		else {
			printf("���� ���ڶ��ϴ�.\n");
		}
		break;
	case 3:
		if (inputMoney >= 4500) {
			printf("���� ��縦 �����߽��ϴ�. �Ž����� %d���� ��������.\n", inputMoney - 4500);
		}
		else {
			printf("���� ���ڶ��ϴ�.\n");
		}
		break;
	case 4:
		if (inputMoney >= 4500) {
			printf("���� �������� �����߽��ϴ�. �Ž����� %d���� ��������.\n", inputMoney - 4000);
		}
		else {
			printf("���� ���ڶ��ϴ�.\n");
		}
		break;
	case 5:
		if (inputMoney >= 4500) {
			printf("���� ȭ��Ʈ�� �����߽��ϴ�. �Ž����� %d���� ��������.\n", inputMoney - 4000);
		}
		else {
			printf("���� ���ڶ��ϴ�.\n");
		}
		break;
	default:
		printf("�߸��� ��ȣ�� �����ϼ̽��ϴ�.\n");
	}

	return 0;
}
