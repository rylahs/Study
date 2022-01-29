#include <stdio.h>

int main(void) {
	//int inputDay = 0;
	//printf("요일을 입력해주세요\n");
	//printf("1:월, 2:화, 3:수, 4:목, 5:금, 6:토, 7:일\n");
	//printf("==> ");
	//scanf_s("%d", &inputDay);

	//switch (inputDay)
	//{
	//case 1:
	//	printf("Monday\n");
	//	break;
	//case 2:
	//	printf("Tuesday\n");
	//	break;
	//case 3:
	//	printf("Wednesday\n");
	//	break;
	//case 4:
	//	printf("Tuersday\n");
	//	break;
	//case 5:
	//	printf("Friday\n");
	//	break;
	//case 6:
	//	printf("Saturday\n");
	//	break;
	//case 7:
	//	printf("Sunday\n");
	//	break;
	//default:
	//	printf("잘못 입력되었습니다.\n");
	//	break;
	//}
	//return 0;

	
	/*
	int inputMenu;
	printf("메뉴를 선택해주세요 (1. 김치찌개, 2. 된장찌개, 3. 순두부찌개) : ");
	scanf_s("%d", &inputMenu);
	switch(inputMenu) {
	case 1:
		printf("김치찌개를 선택했습니다. 5000원을 결제하세요\n");
		break;
	case 2:
		printf("된장찌개를 선택했습니다. 6000원을 결제하세요\n");
		break;
	case 3:
		printf("순두부찌개를 선택했습니다. 7000원을 결제하세요\n");
		break;
	default:
		printf("잘못된 메뉴 선택입니다.\n");
		break;
	}
	*/
	//과제 1 2개의 숫자와 사칙 연산자 (+,-,*,/)을 입력받기
	// 간단한 계산기 프로그램 (switch 변형)
	/*
	double inputA, inputB;
	char calcCh;

	printf("============= 계산기 =============\n");
	printf("첫 번째 숫자 입력 : ");
	scanf_s("%lf", &inputA);
	printf("원하는 연산을 고르세요 (+, -, *, /) :  ");
	scanf_s(" %c", &calcCh);
	printf("두 번째 숫자 입력 : ");
	scanf_s("%lf", &inputB);

	switch (calcCh) {
	case '+':
		printf("\n%.0lf %c %.0lf = %.0lf\n", inputA, calcCh, inputB, inputA + inputB);
		break;
	case '-':
		printf("\n%.0lf %c %.0lf = %.0lf\n", inputA, calcCh, inputB, inputA - inputB);
		break;
	case '*':
		printf("\n%.0lf %c %.0lf = %.0lf\n", inputA, calcCh, inputB, inputA * inputB);
		break;
	case '/':
		printf("\n%.0lf %c %.0lf = %.2lf\n", inputA, calcCh, inputB, inputA / inputB);
		break;
	default:
		printf("+, -, *, / 연산 선택이 잘못되었습니다.\n");
		printf("========== 프로그램 종료 ==========\n");
		exit(0);
	}

	printf("========== 프로그램 종료 =========\n");
	return 0;
	*/
	// 과제2 1~10 숫자만 입력 받아서 홀수 짝수 구분하는 프로그램
	// if + switch use
	// num % 2 == 0 (even)
	int inputNum;
	printf("============= 홀수 짝수 계산기 =============\n");
	printf("숫자 입력 (1 ~ 10) : ");
	scanf_s("%d", &inputNum);
	if (inputNum >= 1 && inputNum <= 10) {
		switch (inputNum % 2) {
		case 0:
			printf("숫자는 짝수입니다\n");
			break;
		case 1:
			printf("숫자는 홀수입니다\n");
			break;
		default:
			printf("알 수 없습니다.\n");
			break;
		}
	}
	else
		printf("숫자 범위에 맞지 않습니다. \n");

	printf("========== 프로그램 종료 ==========\n");
}
