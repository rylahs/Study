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
	int count = 0; // 로또 게임 횟수
	title();
	while (1) {
		switch (showMenu())
		{
		case 1:
			printf("로또 번호를 생성할 게임 횟수를 입력: ");
			scanf_s("%d", &count);
			for (int i = 0; i < count; i++) {
				printf("로또 번호를 생성중입니다. 잠시 기다려주세요!\n");
				Sleep((rand() % 1005) + 700);
				clotto();
			}
			printf("아무 키나 눌러주세요\n");
			getchar();
			getchar();
			system("cls");
			break;

		case 2:
			printf("가중치 있는 로또 번호를 생성할 게임 횟수를 입력: ");
			scanf_s("%d", &count);
			for (int i = 0; i < count; i++) {
				printf("로또 번호를 생성중입니다. 잠시 기다려주세요!\n");
				Sleep((rand() % 1005) + 700); 
				weightLotto();
			}
			printf("아무 키나 눌러주세요\n");
			getchar();
			getchar();
			system("cls");
			break;
		case 3:
			exit(0); // 강제 프로그램 종료
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
	printf("\n\n-------- 로또 1등 번호 --------\n");

	for (int i = 0; i < 6; i++)
		printf("%d\t", currentLottoArray[i]);
	printf("\n\n");
}

void clotto() {
	int r = 0; // 랜덤한 로또 숫자
	int lotto[6] = { 0, }; // 로또 번호 저장
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 6; i++) {
		r = (rand() % 45) + 1; // 1 ~ 45 난수 발생
		lotto[i] = r;
		for (int j = 0; j < i; j++) {
			if (lotto[j] == r) { // 저정된 로또번호와 새로운 로또번호와 비교
				i--;
				break;
			}
		}
	}
	// 퀵 정렬 stdlib 라이브러리 사용
	int size = sizeof(lotto) / sizeof(int);
	qsort(lotto, size, sizeof(lotto[0]), compare);

	printf("\n\n-------- 로또 1등 번호 --------\n");
	for (int i = 0; i < 6; i++) {
		printf("%d\t", lotto[i]);
	}
	printf("\n\n");
}
int showMenu() {
	int menu = 0;
	printf("■■■■■■■■■■■■■■■■■■■■■\n");
	printf("1.C언어 랜덤 로또 1등 예상번호 자동 생성\n");
	printf("2.가중치 로또 1등 예상번호 자동 생성\n");
	printf("3.프로그램 종료\n");
	printf("■■■■■■■■■■■■■■■■■■■■■\n");
	printf("메뉴 선택: ");
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