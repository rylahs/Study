#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//int age = 25;

	//if (age >= 20)
	//	printf("�Ϲ����Դϴ�\n");
	//else
	//	printf("�л��Դϴ�.\n");

	// �ʵ��л�(8~13) / ���л� (14 ~ 16) // ����л� (17 ~19)
	//int age = 25;
	//if (age >= 8 && age <= 13)
	//	printf("�ʵ��л� �Դϴ�\n");
	//else if (age >= 14 && age <= 16)
	//	printf("���л� �Դϴ�\n");
	//else if (age >= 17 && age <= 19)
	//	printf("����л� �Դϴ�\n");
	//else
	//	printf("�л��� �ƴѰ�����\n");

	// 1������ 30������ �л� �� 5������ ��ǥ�� �����մϴ�.
	//for (int i = 1; i <= 30; i++) {
	//	if (i >= 6) {
	//		printf("������ �л��� ������ ������\n");
	//		break;
	//	}
	//	printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
	//}

	// 1������ 30������ �ִ� �ݿ� 7�� �л��� ���ļ� �Ἦ
	// 7���� �����ϰ� 6������ 10������ ���� ��ǥ�� �ϼ���.
	//for (int i = 1; i <= 30; i++) {
	//	if (i >= 6 && i <= 10) {
	//		if (i == 7) {
	//			printf("%d�� �л��� �Ἦ�Դϴ�.\n", i);
	//			continue;
	//		}
	//		printf("%d�� �л��� ������ǥ�� �غ��ϼ���.\n",i);
	//	}
	//}

	// && ||
	//int a = 10;
	//int b = 10;
	//int c = 12;
	//int d = 13;

	//if (a == b || c == d) {
	//	printf("a�� b Ȥ�� c�� d�� ���� �����ϴ�.\n");
	//}
	//else {
	//	printf(" ���� ���� �ٸ��׿�\n");
	//}

	//random
	//srand(time(NULL)); // ���� �ʱ�ȭ
	//int num = rand() % 3 + 1; // 1 ~ 3

	//printf("���� �ʱ�ȭ ����..\n");
	//for (int i = 0; i < 10; i++) {
	//	printf("%d ", rand() % 10);
	//}

	//srand(time(NULL));
	//printf("\n\n���� �ʱ�ȭ ����..\n");
	//for (int i = 0; i < 10; i++) {
	//	printf("%d ", rand() % 10);
	//}

	// ����0 ����1 ��2
	//srand(time(NULL)); // time.h ���� �ʿ� ���� �ʱ�ȭ

	
	//for (int i = 0; i < 30; i++) {
	//	int rps = rand() % 3; // 0 ~ 2
	//	if (rps == 0) {
	//		printf("����!\n");
	//	}
	//	else if (rps == 1) {
	//		printf("����!\n");
	//	}
	//	else if (rps == 2) {
	//		printf("��!\n");
	//	}
	//	else {
	//		printf("�����!\n");
	//	}
	//}

	// switch & case

	//srand(time(NULL)); // ���� �ʱ�ȭ
	//int rps = rand() % 3;

	//switch (rps) {
	//case 0: printf("����\n"); break;
	//case 1: printf("����\n"); break;
	//case 2: printf("��\n"); break;
	//default: printf("�����!\n"); break;

	//}
	// �ʵ��л�(8~13) / ���л� (14 ~ 16) // ����л� (17 ~19)
	//int age = 15;
	//switch (age) {
	//case 8: // break;�� ������ �ߴܵ����� ������ �Ʒ��ʵ� �׳� ������ �� break;�� ������ Ż��
	//case 9:
	//case 10:
	//case 11:
	//case 12:
	//case 13:printf("�ʵ��л� �Դϴ�\n"); break;
	//case 14:
	//case 15:
	//case 16:printf("���л� �Դϴ�\n"); break;
	//case 17:
	//case 18:
	//case 19:printf("����л� �Դϴ�\n"); break;
	//default:printf("�л��� �ƴѰ�����\n"); break;
	//}


	/// Up and down

	srand(time(NULL)); // ���� �ʱ�ȭ
	int numberRandom = rand() % 100 + 1; // 1 ~100 ������ ��
	printf("���� : %d\n", numberRandom);
	int answer = 0; // ����
	int chance = 5; // ��ȸ
	while (1) {
		printf("���� ��ȸ %d ȸ\n", chance--);
		printf("���ڸ� ���纸���� (1 ~ 100) : ");
		scanf_s("%d", &answer);

		if (answer > numberRandom) {
			printf("Down ��\n\n");
		}

		else if (answer < numberRandom) {
			printf("Up ��\n\n");
		}
		else if (answer == numberRandom) {
			printf("Correct! Congrats!\n");
			break;
		}
		else {
			printf("�� �� ���� ������ �߻� �߾��\n");
		}
		if (chance == 0) {
			printf("��ȸ�� ��� ����ϼ̳׿� ���� ��ȸ��! \n\n");
			break;
		}
	}


	return 0;

}