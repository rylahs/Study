#include <stdio.h>

int main_if4(void) {
	// �л� ���� ���� ���α׷�
	// ���� ���� ���� ���� �Է� �ް� ���� ��� ���� ���ϱ�
	// A : 100 ~ 90
	// B : 89 ~ 80
	// C : 79 ~ 70
	// D : 69 ~ 60
	// F : 59 ~

	int kor, eng, math;
	printf("=========================================\n");
	printf("\t�л� ���� ���� ���α׷� v0.1\n");
	printf("-----------------------------------------\n");
	printf("\t\t\t 2021.11.25 MCH\n");
	printf("=========================================\n");
	printf(" ���� �Է� �����մϴ�.\n");
	printf(" ���� ���� �Է� : ");
	scanf_s("%d", &kor);
	printf(" ���� ���� �Է� : ");
	scanf_s("%d", &eng);
	printf(" ���� ���� �Է� : ");
	scanf_s("%d", &math);
	
	int total;
	double avg;
	total = kor + eng + math;
	avg = (double)total / 3;
	printf("=========================================\n");
	printf(" ���� : %d\n", kor);
	printf(" ���� : %d\n", eng);
	printf(" ���� : %d\n", math);
	printf(" ���� : %d\n", total);
	printf(" ��� : %.2lf\n", avg);

	if (avg >= 90 && avg <= 100)
		printf(" ���� : %c\n", 'A');
	else if (avg >= 80 && avg <= 89)
		printf(" ���� : %c\n", 'B');
	else if (avg >= 70 && avg <= 79)
		printf(" ���� : %c\n", 'C');
	else if (avg >= 60 && avg <= 69)
		printf(" ���� : %c\n", 'D');
	else
		printf(" ���� : %c\n", 'F');
	printf("=========================================\n");
	return 0;
}