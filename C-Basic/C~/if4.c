#include <stdio.h>

int main_if4(void) {
	// 학생 성적 관리 프로그램
	// 국어 영어 수학 점수 입력 받고 총점 평균 학점 구하기
	// A : 100 ~ 90
	// B : 89 ~ 80
	// C : 79 ~ 70
	// D : 69 ~ 60
	// F : 59 ~

	int kor, eng, math;
	printf("=========================================\n");
	printf("\t학생 성적 관리 프로그램 v0.1\n");
	printf("-----------------------------------------\n");
	printf("\t\t\t 2021.11.25 MCH\n");
	printf("=========================================\n");
	printf(" 성적 입력 시작합니다.\n");
	printf(" 국어 성적 입력 : ");
	scanf_s("%d", &kor);
	printf(" 영어 성적 입력 : ");
	scanf_s("%d", &eng);
	printf(" 수학 성적 입력 : ");
	scanf_s("%d", &math);
	
	int total;
	double avg;
	total = kor + eng + math;
	avg = (double)total / 3;
	printf("=========================================\n");
	printf(" 국어 : %d\n", kor);
	printf(" 영어 : %d\n", eng);
	printf(" 수학 : %d\n", math);
	printf(" 총점 : %d\n", total);
	printf(" 평균 : %.2lf\n", avg);

	if (avg >= 90 && avg <= 100)
		printf(" 학점 : %c\n", 'A');
	else if (avg >= 80 && avg <= 89)
		printf(" 학점 : %c\n", 'B');
	else if (avg >= 70 && avg <= 79)
		printf(" 학점 : %c\n", 'C');
	else if (avg >= 60 && avg <= 69)
		printf(" 학점 : %c\n", 'D');
	else
		printf(" 학점 : %c\n", 'F');
	printf("=========================================\n");
	return 0;
}