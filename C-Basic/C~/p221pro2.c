// ���� 2. ����(Celsius)�µ��� �Է��ϸ� ȭ��(Fahrenheit)�µ��� ��ȯ�ϴ� CelToFah��� �̸��� �Լ���
//		  �� �ݴ�� ȭ�� �µ��� �Է��ϸ� ���� �µ��� ��ȯ�ϴ� FahTocel�̶�� �̸��� �Լ��� �����ϰ� �� �� �Լ��� ȣ���ϴ� ������ �ϼ��غ���.
//		  ����� ������ ȭ������ �µ���ȯ ������ ������ ����.
// Fah = 1.8 * Cel + 32
#include <stdio.h>

double FahToCel(double Fah)  // ȭ���� ������ ��ȯ
{
	return (Fah - 32) / 1.8;
}
double CelToFah(double Cel) // ������ ȭ���� ��ȯ
{ 
	return 1.8 * Cel + 32;
}

int main_2(void)
{
	double Cel, Fah;
	int selectMode;

	printf("����-> ȭ�� �µ� ��ȯ or ȭ�� -> ���� ��ȯ�ϴ� ���α׷��Դϴ�.\n");
	printf("���ϴ� ������ �������ּ��� (1. ����-> ȭ�� �µ�, 2. ȭ�� -> ���� �µ�) : ");
	scanf_s("%d", &selectMode);

	if (selectMode == 1) {
		printf("���� �µ��� �Է����ּ��� : ");
		scanf_s("%lf", &Cel);

		printf("%.2lf ���� �µ� -> %.2lf ȭ���µ� �Դϴ�.\n", Cel, CelToFah(Cel));
	}
	else if (selectMode == 2) {
		printf("ȭ�� �µ��� �Է����ּ��� : ");
		scanf_s("%lf", &Fah);

		printf("%.2lf ���� �µ� -> %.2lf ȭ���µ� �Դϴ�.\n", Fah, FahToCel(Fah));

	}

	else {
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
}