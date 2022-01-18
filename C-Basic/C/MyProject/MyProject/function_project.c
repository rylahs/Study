#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int getRandomNumber(int level);
void showQuestion(int number, int n1, int n2);
void success();
void fail();
int main(void) {
	// 문이 5개가 있고 각 문마다 점점 어려운 수식 퀴즈가 출제됩니다.
	// 맞히면 통과 틀리면 실패

	srand(time(NULL)); // 난수 초기화

	int count = 0; // 문제를 맞췄습니다.

	for (int i = 1; i <= 5; i++) {
		// x * y = ?
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		//printf("%d x %d = ?", num1, num2);
		showQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1) {
			printf("프로그램을 종료합니다\n");
			exit(0);
		}
		else if (answer == num1 * num2) {
			success();
			count++;
		}
		else {
			fail();
		}

		printf("\n\n당신은 5개의 비밀 번호 중 %d개를 맞췄습니다.\n", count);
		
	}

	return 0;
}
int getRandomNumber(int level) {
	return rand() % (level * 7) + 1;
}

void showQuestion(int number, int n1, int n2) {
	printf("\n\n\n######## %d번째 비밀번호 ######\n\n\t%d x %d = ?\n\n", number, n1, n2);
	printf("###############################\n");
	printf("\n비밀번호를 입력하세요 (종료 : -1) >> ");
}

void success() {
	printf("\n >> Good! 정답입니다.\n");
}
void fail() {
	printf("\n >> 땡! 오답입니다. \n");
}