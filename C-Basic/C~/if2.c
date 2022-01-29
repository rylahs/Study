#include <stdio.h>

int main_if() {

	//int inputNumber = 0;
	//// 1 ~ 10 사이의 숫자를 입력 받아서 성공, 실패 처리
	//printf("1 ~ 10 사이의 정수 입력 : ");
	//scanf_s("%d", &inputNumber);

	//if (inputNumber > 0 && inputNumber < 11) {
	//	printf("입력 받은 값은 %d이며 1 ~ 10 사이의 정수 입니다.\n", inputNumber);
	//}
	//else {
	//	printf("입력 받은 값은 %d이며 1~ 10 사이의 정수가 아닙니다\n", inputNumber);
	//}
	//// 2개의 숫자를 입력 받아서 크다 작다 같다 처리
	//
	int inputA, inputB = 0;
	printf("첫 번째 정수 입력 : ");
	scanf_s("%d", &inputA);
	printf("두 번째 정수 입력 : ");
	scanf_s("%d", &inputB);

	if (inputA == inputB)
		printf("%d == %d로 일치합니다.", inputA, inputB);
	else if (inputA > inputB)
		printf("%d > %d로 %d가 더 큽니다.", inputA, inputB, inputA);
	else
		printf("%d < %d로 %d가 더 큽니다.", inputA, inputB, inputB);

	return 0;
}