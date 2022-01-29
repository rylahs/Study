#include <stdio.h>
typedef struct student
{
	char name[10];
	int kor;
	int eng;
	int math;
	int sum;
	double avg;
}student;
void stuPrint(student s)
{
	printf("�л��̸� : %s\n", s.name);
	printf("�������� : %d\n", s.kor);
	printf("�������� : %d\n", s.math);
	printf("�������� : %d\n", s.eng);
	printf("��    �� : %d\n", s.sum);
	printf("��    �� : %.2lf\n", s.avg);
}
void stuPrintPtr(student *s)
{
	printf("�л��̸� : %s\n", s->name);
	printf("�������� : %d\n", s->kor);
	printf("�������� : %d\n", s->math);
	printf("�������� : %d\n", s->eng);
	printf("��    �� : %d\n", s->sum);
	printf("��    �� : %.2lf\n", s->avg);
}
int main(void)
{
	student a; // ����ü ���� ����(����)
	student* p; // ����ü ������ ���� ����
	printf("�̸� : ");
	scanf_s("%s", a.name, ((__int32)(9 * sizeof(char))));
	printf("���� ���� : ");
	scanf_s("%d", &a.kor);
	printf("���� ���� : ");
	scanf_s("%d", &a.math);
	printf("���� ���� : ");
	scanf_s("%d", &a.eng);

	a.sum = a.kor + a.eng + a.math;
	a.avg = a.sum / 3;
	
	stuPrint(a);
	p = &a;

	stuPrintPtr(p);


}