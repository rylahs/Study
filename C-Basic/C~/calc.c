#include <stdio.h>

int main_calc() {
	//// 2개의 숫자와 사칙 연산자 (+,-,*,/)을 입력받기
	//// 간단한 계산기 프로그램
	//double inputA, inputB;
	//char calcCh;

	//printf("============= 계산기 =============\n");
	//printf("첫 번째 숫자 입력 : ");
	//scanf_s("%lf", &inputA);
	//printf("원하는 연산을 고르세요 (+, -, *, /) :  ");
	//scanf_s(" %c", &calcCh);
	//printf("두 번째 숫자 입력 : ");
	//scanf_s("%lf", &inputB);

	//if (calcCh == '+')
	//	printf("\n%d %c %d = %d\n", (int)inputA, calcCh, (int)inputB, (int)(inputA + inputB));
	//else if (calcCh == '-')
	//	printf("\n%d %c %d = %d\n", (int)inputA, calcCh, (int)inputB, (int)(inputA - inputB));
	//else if (calcCh == '*')
	//	printf("\n%d %c %d = %d\n", (int)inputA, (int)calcCh, (int)inputB, (int)(inputA * inputB));
	//else if (calcCh == '/')
	//	printf("\n%d %c %d = %.3lf\n", (int)inputA, calcCh, (int)inputB, inputA / inputB);
	//else {
	//	printf("+, -, *, / 연산 선택이 잘못되었습니다.\n");
	//	printf("========== 프로그램 종료 ==========\n");
	//	exit(0);
	//}
	//printf("========== 프로그램 종료 =========\n");
	//return 0;

	// 윤년 구분 프로그램
	// 1. 입력한 년도를 4로 나누면 나머지가 0이고,  100으로 나누면 0이 아님.
	// 2. 입력한 년도를 400으로 나누면 나머지가 0.
	int inputYear;
	printf(" 윤년을 판별하는 프로그램입니다.\n");
	printf(" 연도를 입력해주세요 : ");
	scanf_s("%d", &inputYear);
	
	if ((inputYear % 4 == 0) && (inputYear % 100 != 0) || (inputYear % 400 == 0))
		printf(" %d년은 윤년입니다! \n", inputYear);
	else
		printf(" %d년은 윤년이 아닙니다! \n", inputYear);

	return 0;
}