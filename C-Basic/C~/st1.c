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
	printf("학생이름 : %s\n", s.name);
	printf("국어점수 : %d\n", s.kor);
	printf("수학점수 : %d\n", s.math);
	printf("영어점수 : %d\n", s.eng);
	printf("총    점 : %d\n", s.sum);
	printf("평    균 : %.2lf\n", s.avg);
}
void stuPrintPtr(student *s)
{
	printf("학생이름 : %s\n", s->name);
	printf("국어점수 : %d\n", s->kor);
	printf("수학점수 : %d\n", s->math);
	printf("영어점수 : %d\n", s->eng);
	printf("총    점 : %d\n", s->sum);
	printf("평    균 : %.2lf\n", s->avg);
}
int main(void)
{
	student a; // 구조체 변수 선언(생성)
	student* p; // 구조체 포인터 변수 선언
	printf("이름 : ");
	scanf_s("%s", a.name, ((__int32)(9 * sizeof(char))));
	printf("국어 점수 : ");
	scanf_s("%d", &a.kor);
	printf("수학 점수 : ");
	scanf_s("%d", &a.math);
	printf("영어 점수 : ");
	scanf_s("%d", &a.eng);

	a.sum = a.kor + a.eng + a.math;
	a.avg = a.sum / 3;
	
	stuPrint(a);
	p = &a;

	stuPrintPtr(p);


}