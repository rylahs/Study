#include <stdio.h>

int main_loop2 (void) {

	// 중요하니까 꼭 기억하기
	// break : 현재 속해있는 반복문{} 안을 탈출
	// continue : 아래에 있는 실행 문장들을 무시하고 반복문 다음 동작 실행
	/*for (int i = 0; i < 10; i++) {
		printf("반복문 수행 : %d\n", i);
		continue;
		printf("반복문 수행 : %d\n", i);
	}
	*/
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0 && i != 0) {
			continue;
		}
		if (i == 7)
			break;
		printf("반복문 수행 : %d\n", i);
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("이중 for문 : i = %d , j = %d\n", i, j);
		}
	}

	// 구구단 2 ~ 9단 출력
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			printf("%dx%d=%2d    ", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}