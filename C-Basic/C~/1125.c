#include <stdio.h>

int main_1125if(void) {

	int num = 100; // ������ ���� num ���� �� �ʱ�ȭ

	if (num >= 100) {// num�� 100 �̻��̶�� 
		//if ������ "�� �� ��쿡 �� ����
		printf("num�� 100�̻� �Դϴ�.\n");
	}

	if (num != 99) // ������ ��� �߰�ȣ ����
		printf("num�� 99�� ���� �ʴ�\n");

	if (num == 99) {
		printf("num�� 99�� ����\n");
		printf("���� ���α׷� ����\n");
	}

	num = 120;
	if (num == 120) {
		printf("num�� 120�� ����.\n");
	}
	else {
		printf("num�� 120�� �ٸ���.\n");
	}

	num = 200;
	if (num >= 50 && num <= 150) // 50 ~ 150
		printf("50�� 150 ������ ���̴�. \n");
	else
		printf("num�� 50���� �۰ų� 150���� ū ��\n");

	num = 100;
	if (num >= 10 || num <= 90) // 10 ~ 90
		printf("10 �̻��̰ų� 90 ������ ��. \n");
	else
		printf("num�� 10���� �۰ų� 90���� ū �� : ���� �ȵ�\n");

	num = 80;
	if (num == 100)
		printf("num�� 100�� ����. \n");
	else if (num == 90)
		printf("num�� 90�� ����.\n");
	else if (num == 80)
		printf("num�� 80�� ����.\n");
	else if (num == 70)
		printf("num�� 70�� ����.\n");
	else if (num == 60)
		printf("num�� 60�� ����.\n");
	else
		printf("�˼� ���� ���̴�.\n");



	return 0;
}