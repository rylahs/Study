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
	printf("�̸�      : %s\n", s.name);
	printf("���� ���� : %d\n", s.kor);
	printf("���� ���� : %d\n", s.eng);
	printf("��� ���� : %.2lf\n", s.avg);

}


int main(void)
{
	struct student s[3];
	strcpy_s(s[0].name, sizeof(char) * 9, "ȫ�浿");
	s[0].kor = 90;
	s[0].eng = 80;
	s[0].avg = (s[0].kor + s[0].eng) / 2;

	strcpy_s(s[1].name, sizeof(char) * 9, "������");
	s[1].kor = 90;
	s[1].eng = 100;
	s[1].avg = (s[1].kor + s[1].eng) / 2;

	strcpy_s(s[2].name, sizeof(char) * 9, "������");
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
	strcpy_s(stTwoPtr[0].name, sizeof(char) * 9, "ȫ�浿");
	stTwoPtr[0].kor = 90;
	
	strcpy_s(stTwoPtr[1].name, sizeof(char) * 9, "������");
	stTwoPtr[1].kor = 90;
	
	strcpy_s(stTwoPtr[2].name, sizeof(char) * 9, "������");
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
	strcpy_s(s[0].name, 9, "ȫ�浿");
	s[0].kor = 90;
	s[0].eng = 80;
	int hap = s[0].kor + s[0].eng;
	s[0].avg = hap / 2.0;

	strcpy_s(s[1].name, 9, "������");
	s[1].kor = 100;
	s[1].eng = 90;
	hap = s[1].kor + s[1].eng;
	s[1].avg = hap / 2.0;

	strcpy_s(s[2].name, 9, "������");
	s[2].kor = 80;
	s[2].eng = 70;
	hap = s[2].kor + s[2].eng;
	s[2].avg = hap / 2.0;

	for (int i = 0; i < 3; i++) {
		printf("�л�: %s\n", s[i].name);
		printf("����: %d\n", s[i].kor);
		printf("����: %d\n", s[i].eng);
		printf("���: %lf\n", s[i].avg);
		printf("------------------------\n");
	}

	struct student2 {
		char name[10];
		int kor;
	};

	struct student2* sPtr = NULL;
	sPtr = (struct student2 *)malloc(sizeof(struct student2) * 3);

	if (sPtr == NULL) {
		exit(0); // ���α׷� ���� ����
	}
	strcpy_s(sPtr[0].name, 9, "����ġ");
	sPtr[0].kor = 90;
	strcpy_s(sPtr[1].name, 9, "ȫ�浿");
	sPtr[1].kor = 80;
	strcpy_s(sPtr[2].name, 9, "�̼���");
	sPtr[2].kor = 70;

	for (int i = 0; i < 3; i++) {
		printf("�л�: %s\n", sPtr[i].name);
		printf("����: %d\n", sPtr[i].kor);
	}
	free(sPtr);
	sPtr = NULL;
}


*/