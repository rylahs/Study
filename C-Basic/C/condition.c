#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//int age = 25;

	//if (age >= 20)
	//	printf("일반인입니다\n");
	//else
	//	printf("학생입니다.\n");

	// 초등학생(8~13) / 중학생 (14 ~ 16) // 고등학생 (17 ~19)
	//int age = 25;
	//if (age >= 8 && age <= 13)
	//	printf("초등학생 입니다\n");
	//else if (age >= 14 && age <= 16)
	//	printf("중학생 입니다\n");
	//else if (age >= 17 && age <= 19)
	//	printf("고등학생 입니다\n");
	//else
	//	printf("학생이 아닌가봐요\n");

	// 1번부터 30번까지 학생 중 5번까지 발표를 진행합니다.
	//for (int i = 1; i <= 30; i++) {
	//	if (i >= 6) {
	//		printf("나머지 학생은 집으로 가세요\n");
	//		break;
	//	}
	//	printf("%d번 학생은 조별 발표 준비를 하세요.\n", i);
	//}

	// 1번부터 30번까지 있는 반에 7번 학생은 아파서 결석
	// 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요.
	//for (int i = 1; i <= 30; i++) {
	//	if (i >= 6 && i <= 10) {
	//		if (i == 7) {
	//			printf("%d번 학생은 결석입니다.\n", i);
	//			continue;
	//		}
	//		printf("%d번 학생은 조별발표를 준비하세요.\n",i);
	//	}
	//}

	// && ||
	//int a = 10;
	//int b = 10;
	//int c = 12;
	//int d = 13;

	//if (a == b || c == d) {
	//	printf("a와 b 혹은 c와 d의 값이 같습니다.\n");
	//}
	//else {
	//	printf(" 값이 서로 다르네요\n");
	//}

	//random
	//srand(time(NULL)); // 난수 초기화
	//int num = rand() % 3 + 1; // 1 ~ 3

	//printf("난수 초기화 이전..\n");
	//for (int i = 0; i < 10; i++) {
	//	printf("%d ", rand() % 10);
	//}

	//srand(time(NULL));
	//printf("\n\n난수 초기화 이후..\n");
	//for (int i = 0; i < 10; i++) {
	//	printf("%d ", rand() % 10);
	//}

	// 가위0 바위1 보2
	//srand(time(NULL)); // time.h 정의 필요 난수 초기화

	
	//for (int i = 0; i < 30; i++) {
	//	int rps = rand() % 3; // 0 ~ 2
	//	if (rps == 0) {
	//		printf("가위!\n");
	//	}
	//	else if (rps == 1) {
	//		printf("바위!\n");
	//	}
	//	else if (rps == 2) {
	//		printf("보!\n");
	//	}
	//	else {
	//		printf("몰라요!\n");
	//	}
	//}

	// switch & case

	//srand(time(NULL)); // 난수 초기화
	//int rps = rand() % 3;

	//switch (rps) {
	//case 0: printf("가위\n"); break;
	//case 1: printf("바위\n"); break;
	//case 2: printf("보\n"); break;
	//default: printf("몰라요!\n"); break;

	//}
	// 초등학생(8~13) / 중학생 (14 ~ 16) // 고등학생 (17 ~19)
	//int age = 15;
	//switch (age) {
	//case 8: // break;가 있으면 중단되지만 없으면 아래쪽도 그냥 실행을 함 break;를 만나야 탈출
	//case 9:
	//case 10:
	//case 11:
	//case 12:
	//case 13:printf("초등학생 입니다\n"); break;
	//case 14:
	//case 15:
	//case 16:printf("중학생 입니다\n"); break;
	//case 17:
	//case 18:
	//case 19:printf("고등학생 입니다\n"); break;
	//default:printf("학생이 아닌가봐요\n"); break;
	//}


	/// Up and down

	srand(time(NULL)); // 난수 초기화
	int numberRandom = rand() % 100 + 1; // 1 ~100 사이의 수
	printf("숫자 : %d\n", numberRandom);
	int answer = 0; // 정답
	int chance = 5; // 기회
	while (1) {
		printf("남은 기회 %d 회\n", chance--);
		printf("숫자를 맞춰보세요 (1 ~ 100) : ");
		scanf_s("%d", &answer);

		if (answer > numberRandom) {
			printf("Down ↓\n\n");
		}

		else if (answer < numberRandom) {
			printf("Up ↑\n\n");
		}
		else if (answer == numberRandom) {
			printf("Correct! Congrats!\n");
			break;
		}
		else {
			printf("알 수 없는 오류가 발생 했어요\n");
		}
		if (chance == 0) {
			printf("기회를 모두 사용하셨네요 다음 기회에! \n\n");
			break;
		}
	}


	return 0;

}