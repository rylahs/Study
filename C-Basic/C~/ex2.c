#include <stdio.h>
// ���ȭ : �ʿ��� ��ɵ��� �Լ����� ����
void title_b()
{
	printf("----------------------------\n");
	printf("������ ���� v1.1\n");
	printf("----------------------------\n");
}
// 2��° �Լ� ����
// void �Լ���(�Ű�����)
void calc2(double n1, double n2, char ch)
{	// �Ű������� Ȱ���ؼ� �Լ� �ۼ�
	switch (ch)
	{
	case '+':
		printf("%.0lf + %.0lf = %.0lf", n1, n2, n1 + n2);
		break;
	case '-':
		printf("%.0lf - %.0lf = %.0lf", n1, n2, n1 + n2);
		break;
	case '*':
		printf("%.0lf * %.0lf = %.0lf", n1, n2, n1 * n2);
		break;
	case '/':
		printf("%.0lf / %.0lf = %.0lf", n1, n2, n1 / n2);
		break;
	default:
		printf("�߸��� ���ڰ� �ԷµǾ����ϴ�.\n");
	}
}
int main_ex2(void)
{

	title_b();

	double num1, num2;
	char calcCh;
	printf("����� ���ڸ� �Է����ּ���\n");
	printf("���� 1 �Է� : ");
	scanf_s("%lf", &num1);
	printf("���� 2 �Է� : ");
	scanf_s("%lf", &num2);
	printf("����� ������ �Է����ּ���(+, -, *, /) : ");
	scanf_s(" %c", &calcCh, sizeof(char));

	calc2(num1, num2, calcCh);

	return 0;
}