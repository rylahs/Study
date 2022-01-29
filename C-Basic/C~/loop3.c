#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct studentInfo {
	char name[50];
	int age;
	int score[3];
}studentInfo;
int main_loop3(void) {

	// Infinity Loop
	//for (;;) {
	int stuNum = 0;
	while(1) {
		printf("=======================================\n");
		printf("\t학생 주소록 관리 프로그램 v0.2\n");
		printf("=======================================\n");
		printf("\t1.학생 정보 추가\n");
		printf("\t2.학생 정보 보기\n");
		printf("\t3.학생 정보 수정\n");
		printf("\t4.학생 정보 삭제\n");
		printf("\t5. 종  료      \n");
		printf("=======================================\n");
		printf("메뉴를 선택하세요 : ");
		int inputMenu;
		scanf_s("%d", &inputMenu);

		studentInfo stu[10];
		int inputFindNum;
		int controlModifyNum;
		switch (inputMenu) {
		case 1:
			printf("학생 이름을 입력해주세요 : ");
			scanf_s("%s",&stu[stuNum].name, 50 * sizeof(char));
			printf("학생 나이를 입력해주세요 : ");
			scanf_s("%d", &stu[stuNum].age);
			stuNum++;
			break;
		case 2:
			printf("\n\n");
			for (int i = 0; i < stuNum; i++) {
				printf("번호 : %d\n", i + 1);
				printf("이름 : %s\n", stu[i].name);
				printf("나이 : %d\n\n", stu[i].age);
			}
			break;
		case 3:
			printf("수정하실 학생의 번호를 입력하세요 : ");
			scanf_s("%d", &inputFindNum);
			if (inputFindNum > stuNum) {
				printf("Error!\n");
				break;
			}

			else {
				printf("\n선택하신 학생 정보\n");
				printf("\n이름 : %s , 나이 : %d\n\n", stu[inputFindNum - 1].name, stu[inputFindNum - 1].age);
				printf("수정하실 학생 정보를 선택해주세요 (1. 이름, 2. 나이) : \n");
				scanf_s("%d", &controlModifyNum);
				switch (controlModifyNum) {
				case 1:
					printf("이름을 입력해주세요 : ");
					scanf_s("%s", &stu[inputFindNum - 1].name, 50*sizeof(char));
					break;
				case 2:
					printf("나이를 입력해주세요 : ");
					scanf_s("%d", &stu[inputFindNum - 1].age);
					break;
				}
				break;
			}
			break;
		case 4:
			printf("삭제하실 학생의 번호를 입력하세요 : ");
			scanf_s("%d", &inputFindNum);
			if (inputFindNum - 1 > stuNum) {
				printf("Error!\n");
				break;
			}
			else {
				strcpy_s(stu[inputFindNum - 1].name, 50 * sizeof(char), "");
				stu[inputFindNum - 1].age = -1;
				break;
			}
			break;

		case 5:
			printf("프로그램 종료\n");
			exit(0);
		}
	}

	// 변수, 데이터 타입, 연산자, 조건문
	return 0;
}