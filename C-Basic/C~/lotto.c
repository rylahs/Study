#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>
#

void title();
void clotto();
void weightLotto();
int showMenu();
int compare(const void* a, const void* b);

int main()
{
	int count = 0; // �ζ� ���� Ƚ��
	title();
	while (1) {
		switch (showMenu())
		{
		case 1:
			printf("�ζ� ��ȣ�� ������ ���� Ƚ���� �Է�: ");
			scanf_s("%d", &count);
			for (int i = 0; i < count; i++) {
				printf("�ζ� ��ȣ�� �������Դϴ�. ��� ��ٷ��ּ���!\n");
				Sleep((rand() % 1005) + 700);
				clotto();
			}
			printf("�ƹ� Ű�� �����ּ���\n");
			getchar();
			getchar();
			system("cls");
			break;

		case 2:
			printf("����ġ �ִ� �ζ� ��ȣ�� ������ ���� Ƚ���� �Է�: ");
			scanf_s("%d", &count);
			for (int i = 0; i < count; i++) {
				printf("�ζ� ��ȣ�� �������Դϴ�. ��� ��ٷ��ּ���!\n");
				Sleep((rand() % 1005) + 700); 
				weightLotto();
			}
			printf("�ƹ� Ű�� �����ּ���\n");
			getchar();
			getchar();
			system("cls");
			break;
		case 3:
			exit(0); // ���� ���α׷� ����
			break;
		}
	}
}

void title() {
	printf("------------------------------\n");
	printf(">>>>>>>>>>> Lotto <<<<<<<<<<< \n");
	printf("------------------------------\n");
}


void weightLotto() {
	int lottoWeight[45] = { 30,   68,  104,  134,  161,  193,  223,  248,  281,  320,
							 352,  398,  438,  471,  505,  545,  581,  625,  659,  680,
							 725,  756,  787,  823,  851,  882,  914,  952,  982, 1015,
							1052, 1078, 1115, 1154, 1185, 1223, 1254, 1294, 1336, 1363,
							1400, 1441, 1485, 1517, 1554
	};
	int currentLottoArray[6] = { 0, };


	srand((unsigned int)time(NULL));
	int lottoCount = (rand() % 1554) + 1;
	for (int i = 0; i < 6; i++) {
		int lottoCount = 0;
		lottoCount = (rand() % 1554) + 1;
		for (int j = 0; j < 45; j++) {
			if (lottoWeight[j] < lottoCount)
				continue;
			if (lottoWeight[j] >= lottoCount) {
				lottoCount = j + 1;
				break;
			}
		}
		currentLottoArray[i] = lottoCount;

		for (int j = 0; j < i; j++) {
			if (currentLottoArray[j] == lottoCount && i != j) {
				i--;
				break;
			}
		}

	}
	qsort(currentLottoArray, 6, sizeof(currentLottoArray[0]), compare);
	printf("\n\n-------- �ζ� 1�� ��ȣ --------\n");

	for (int i = 0; i < 6; i++)
		printf("%d\t", currentLottoArray[i]);
	printf("\n\n");
}

void clotto() {
	int r = 0; // ������ �ζ� ����
	int lotto[6] = { 0, }; // �ζ� ��ȣ ����
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 6; i++) {
		r = (rand() % 45) + 1; // 1 ~ 45 ���� �߻�
		lotto[i] = r;
		for (int j = 0; j < i; j++) {
			if (lotto[j] == r) { // ������ �ζǹ�ȣ�� ���ο� �ζǹ�ȣ�� ��
				i--;
				break;
			}
		}
	}
	// �� ���� stdlib ���̺귯�� ���
	int size = sizeof(lotto) / sizeof(int);
	qsort(lotto, size, sizeof(lotto[0]), compare);

	printf("\n\n-------- �ζ� 1�� ��ȣ --------\n");
	for (int i = 0; i < 6; i++) {
		printf("%d\t", lotto[i]);
	}
	printf("\n\n");
}
int showMenu() {
	int menu = 0;
	printf("����������������������\n");
	printf("1.C��� ���� �ζ� 1�� �����ȣ �ڵ� ����\n");
	printf("2.����ġ �ζ� 1�� �����ȣ �ڵ� ����\n");
	printf("3.���α׷� ����\n");
	printf("����������������������\n");
	printf("�޴� ����: ");
	scanf_s("%d", &menu);
	return menu;
}
int compare(const void* a, const void* b)
{
	if (*(int*)a > *(int*)b)
		return 1;

	else if (*(int*)a < *(int*)b)
		return -1;

	else
		return 0;
}