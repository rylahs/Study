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
		printf("\t�л� �ּҷ� ���� ���α׷� v0.2\n");
		printf("=======================================\n");
		printf("\t1.�л� ���� �߰�\n");
		printf("\t2.�л� ���� ����\n");
		printf("\t3.�л� ���� ����\n");
		printf("\t4.�л� ���� ����\n");
		printf("\t5. ��  ��      \n");
		printf("=======================================\n");
		printf("�޴��� �����ϼ��� : ");
		int inputMenu;
		scanf_s("%d", &inputMenu);

		studentInfo stu[10];
		int inputFindNum;
		int controlModifyNum;
		switch (inputMenu) {
		case 1:
			printf("�л� �̸��� �Է����ּ��� : ");
			scanf_s("%s",&stu[stuNum].name, 50 * sizeof(char));
			printf("�л� ���̸� �Է����ּ��� : ");
			scanf_s("%d", &stu[stuNum].age);
			stuNum++;
			break;
		case 2:
			printf("\n\n");
			for (int i = 0; i < stuNum; i++) {
				printf("��ȣ : %d\n", i + 1);
				printf("�̸� : %s\n", stu[i].name);
				printf("���� : %d\n\n", stu[i].age);
			}
			break;
		case 3:
			printf("�����Ͻ� �л��� ��ȣ�� �Է��ϼ��� : ");
			scanf_s("%d", &inputFindNum);
			if (inputFindNum > stuNum) {
				printf("Error!\n");
				break;
			}

			else {
				printf("\n�����Ͻ� �л� ����\n");
				printf("\n�̸� : %s , ���� : %d\n\n", stu[inputFindNum - 1].name, stu[inputFindNum - 1].age);
				printf("�����Ͻ� �л� ������ �������ּ��� (1. �̸�, 2. ����) : \n");
				scanf_s("%d", &controlModifyNum);
				switch (controlModifyNum) {
				case 1:
					printf("�̸��� �Է����ּ��� : ");
					scanf_s("%s", &stu[inputFindNum - 1].name, 50*sizeof(char));
					break;
				case 2:
					printf("���̸� �Է����ּ��� : ");
					scanf_s("%d", &stu[inputFindNum - 1].age);
					break;
				}
				break;
			}
			break;
		case 4:
			printf("�����Ͻ� �л��� ��ȣ�� �Է��ϼ��� : ");
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
			printf("���α׷� ����\n");
			exit(0);
		}
	}

	// ����, ������ Ÿ��, ������, ���ǹ�
	return 0;
}