// 3��° �Լ� ����
// ����Ÿ�� �Լ���() -> ���ϰ��� �ݵ�� 1���� ����
#include <stdio.h>

void title_c()
{
	printf("----------------------------\n");
	printf("������ ���� v1.2\n");
	printf("----------------------------\n");
}
double calc3()
{
	double num5, num6;
	char chC3;
	printf("����� ���ڸ� �Է����ּ���\n");
	printf("���� 1 �Է� : ");
	scanf_s("%lf", &num5);
	printf("���� 2 �Է� : ");
	scanf_s("%lf", &num6);
	printf("����� ������ �Է����ּ���(+, -, *, /) : ");
	scanf_s(" %c", &chC3, sizeof(char));
	switch (chC3)
	{
	case '+':
		printf("%.0lf + %.0lf = ", num5, num6);
		return num5 + num6;

	case '-':
		printf("%.0lf - %.0lf = ", num5, num6);
		return num5 - num6;

	case '*':
		printf("%.0lf * %.0lf = ", num5, num6);
		return num5 * num6;

	case '/':
		printf("%.1lf / %.1lf = ", num5, num6);
		return (double)num5 / num6;

	default:
		printf("�߸��� ���ڰ� �ԷµǾ����ϴ�.\n");
		return -1;
	}
}

int main_func3(void)
{
	title_c();
	double result;
	// ���� �޾Ƽ� main()���� �� ���
	result = calc3();
	printf("%.4lf\n", result);
	return 0;
}