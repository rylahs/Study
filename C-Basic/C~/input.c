#include <stdio.h>

int main_input(void) { // ���� �Լ� : ���α׷��� ó�� �����ϴ� ��ġ
	// ǥ�� C���� : ANSI C
	int num = 0;
	printf("Input Number : ");
	scanf_s("%d", &num); // num ������ �ּҰ��� ���� Ű����� �Է� �޾Ƽ� ����
	printf("Number : %d\n", num);
	
	char ch;
	printf("Input Character : ");
	scanf_s(" %c", &ch);
	printf("Char : %c\n", ch);


	double dNum = 0.0;
	printf("Input double Num : ");
	scanf_s("%lf", &dNum);
	printf("Double : %lf\n", dNum);

	char name[70];
	printf("Input String : ");
	scanf_s("%s", name);
	printf("String : %s\n", name);

	return 0;
}