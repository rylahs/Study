
#include <stdio.h>

int main_hwinputver() {
	const double PI = 3.14159265358979323846; //��� ������ �빮�� ���
	double r;

	printf("�������� �Է��ϼ��� : ");
	scanf_s("%lf", &r);
	double area = r * r * PI;
	printf("���� ������ %.5lf �Դϴ�.\n", area);

	int han, eng, math;
	han = 90, eng = 95, math = 99;
	int sum = han + eng + math;
	double avg = sum / 3;
	printf("������ �Է��մϴ�. �Է����ּ���(����, ����, ����) : ");
	scanf_s("%d%d%d", &han, &eng, &math);

	printf("------------����ǥ------------\n");
	printf("���� : %d, ���� : %d, ���� : %d\n", han, eng, math);
	printf("������ �� : %d��\n��� ���� : %.1lf��\n", sum, avg);



	char name[70];
	printf("Input String : ");
	scanf_s("%69s", name, 70*sizeof(char));
	printf("String : %s\n", name);

	return 0;
}