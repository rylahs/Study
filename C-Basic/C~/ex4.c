// 4. ����Ÿ�� �Լ���


#include <stdio.h>

void title_d()
{
	printf("----------------------------\n");
	printf("������ ���� v1.3\n");
	printf("----------------------------\n");
}
double calc4(double a, double b, char ch)
{
	switch (ch)
	{
	case '+':
		printf("%.0lf + %.0lf = ", a, b);
		return a + b;

	case '-':
		printf("%.0lf - %.0lf = ", a, b);
		return a - b;

	case '*':
		printf("%.0lf * %.0lf = ", a, b);
		return a * b;

	case '/':
		printf("%.1lf / %.1lf = ", a, b);
		return (double)a / b;

	default:
		printf("�߸��� ���ڰ� �ԷµǾ����ϴ�.\n");
		return -1;
	}
}

int main(void)
{
	title_d();
	
	double num5, num6;
	char chC4;
	printf("����� ���ڸ� �Է����ּ���\n");
	printf("���� 1 �Է� : ");
	scanf_s("%lf", &num5);
	printf("���� 2 �Է� : ");
	scanf_s("%lf", &num6);
	printf("����� ������ �Է����ּ���(+, -, *, /) : ");
	scanf_s(" %c", &chC4, sizeof(char));
		
	double resultD;
	
	resultD = calc4(num5, num6, chC4);
	printf("%.4lf\n", resultD);

	return 0;
}