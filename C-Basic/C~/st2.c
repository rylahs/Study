#include <stdio.h>
#include <string.h> // strcpy
#include <stdlib.h>
struct student {
	char name[10];
	int kor;
	int eng;
	double avg;
};
struct student2 {
	char name[10];
	int kor;
};
void stuPrint(struct student s)
{
	printf("이름      : %s\n", s.name);
	printf("국어 점수 : %d\n", s.kor);
	printf("영어 점수 : %d\n", s.eng);
	printf("평균 점수 : %.2lf\n", s.avg);

}


int main(void)
{
	struct student s[3];
	strcpy_s(s[0].name, sizeof(char) * 9, "홍길동");
	s[0].kor = 90;
	s[0].eng = 80;
	s[0].avg = (s[0].kor + s[0].eng) / 2;

	strcpy_s(s[1].name, sizeof(char) * 9, "김유신");
	s[1].kor = 90;
	s[1].eng = 100;
	s[1].avg = (s[1].kor + s[1].eng) / 2;

	strcpy_s(s[2].name, sizeof(char) * 9, "강감찬");
	s[2].kor = 80;
	s[2].eng = 70;
	s[2].avg = (s[2].kor + s[2].eng) / 2;

	for (int i = 0; i < 3; i++)
	{
		stuPrint(s[i]);
		printf("--------------------------\n");
	}
	struct student* stPtr = NULL;
	stPtr = (struct student*)malloc(sizeof(struct student) * 3); // struct student st[3];
	

	struct student2* stTwoPtr = NULL;
	stTwoPtr = (struct student2*)malloc(sizeof(struct student2) * 3); // struct student st[3];
	strcpy_s(stTwoPtr[0].name, sizeof(char) * 9, "홍길동");
	stTwoPtr[0].kor = 90;
	
	strcpy_s(stTwoPtr[1].name, sizeof(char) * 9, "김유신");
	stTwoPtr[1].kor = 90;
	
	strcpy_s(stTwoPtr[2].name, sizeof(char) * 9, "강감찬");
	s[2].kor = 80;
	
	free(stPtr);
	free(stTwoPtr);
	return 0;
}
/*
#include <stdio.h>
#include <string.h> // strcpy
#include <stdlib.h> // malloc

int main()
{
	struct student {
		char name[10];
		int kor;
		int eng;
		double avg;
	};

	struct student s[3];
	strcpy_s(s[0].name, 9, "홍길동");
	s[0].kor = 90;
	s[0].eng = 80;
	int hap = s[0].kor + s[0].eng;
	s[0].avg = hap / 2.0;

	strcpy_s(s[1].name, 9, "김유신");
	s[1].kor = 100;
	s[1].eng = 90;
	hap = s[1].kor + s[1].eng;
	s[1].avg = hap / 2.0;

	strcpy_s(s[2].name, 9, "강감찬");
	s[2].kor = 80;
	s[2].eng = 70;
	hap = s[2].kor + s[2].eng;
	s[2].avg = hap / 2.0;

	for (int i = 0; i < 3; i++) {
		printf("학생: %s\n", s[i].name);
		printf("국어: %d\n", s[i].kor);
		printf("영어: %d\n", s[i].eng);
		printf("평균: %lf\n", s[i].avg);
		printf("------------------------\n");
	}

	struct student2 {
		char name[10];
		int kor;
	};

	struct student2* sPtr = NULL;
	sPtr = (struct student2 *)malloc(sizeof(struct student2) * 3);

	if (sPtr == NULL) {
		exit(0); // 프로그램 강제 종료
	}
	strcpy_s(sPtr[0].name, 9, "전우치");
	sPtr[0].kor = 90;
	strcpy_s(sPtr[1].name, 9, "홍길동");
	sPtr[1].kor = 80;
	strcpy_s(sPtr[2].name, 9, "이순신");
	sPtr[2].kor = 70;

	for (int i = 0; i < 3; i++) {
		printf("학생: %s\n", sPtr[i].name);
		printf("국어: %d\n", sPtr[i].kor);
	}
	free(sPtr);
	sPtr = NULL;
}


*/