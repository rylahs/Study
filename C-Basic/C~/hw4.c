#include <stdio.h>

int main_hw4(void) {
	/*
	1. 아래의 메뉴를 선택하여 출력.
		조건1) 메뉴 선택은 문자로 입력 처리.
		조건2) 프로그램 출력은 아래와 같은 형식으로 하기 바람.

		-----------------------------
		 식당 메뉴 자동 주문 프로그램 v1.0
		-----------------------------
		원하는 식사를 선택하세요.

		a. 김치찌개 : 5,000원
		b. 된장찌개 : 5,000원
		c. 칼국수   : 4,500원
		d. 잔치국수 : 4,000원
		e. 비빔밥   : 5,000원

		-----------------------------
		메뉴를 선택하세요 : c
		비빔밥을 주문했습니다.

		[출처] https://blog.naver.com/hack4ork/221690105166
	*/
	char selectMenuCalc;
	printf("============ 문제 1 ============\n");
	printf("------------------------------------\n");
	printf("\t식당 메뉴 자동 주문 프로그램 v1.0\n");
	printf("------------------------------------\n");
	printf("원하는 식사를 선택하세요.\n\n");
	printf("a. 김치찌개 : 5,000원\n");
	printf("b. 된장찌개 : 5,000원\n");
	printf("c. 칼국수   : 4,500원\n");
	printf("d. 잔치국수 : 4,000원\n");
	printf("e. 비빔밥   : 5,000원\n");

	printf("메뉴를 선택하세요 : ");
	scanf_s("%c", &selectMenuCalc, 1);

	switch (selectMenuCalc) {
	case 'a':
		printf("김치찌개를 주문했습니다.\n");
		break;
	case 'b':
		printf("된장찌개를 주문했습니다.\n");
		break;
	case 'c':
		printf("칼국수를 주문했습니다.\n");
		break;
	case 'd':
		printf("잔치국수를 주문했습니다.\n");
		break;
	case 'e':
		printf("비빔밥을 주문했습니다.\n");
		break;
	default:
		printf("올바른 메뉴를 선택해주세요 \n");
		break;
	}
	/*
	 2. 2개의 숫자와 사칙연산자(+, -, X, /)를 입력받아서 사용하는 계산기 프로그램.
		-----------------------------
		 간단한 계산기 프로그램 v1.0
		-----------------------------
		1. Num1 입력 => 10
		2. Num2 입력 => 5
		3. 연산자 입력 => X

		10 X 5 = 50
		

		[출처] https://blog.naver.com/hack4ork/221690105166
	*/
	int calcNum1, calcNum2;
	char calcCh;
	printf("\n\n============ 문제 2 ============\n");
	printf("------------------------------------\n");
	printf("\t간단한 계산기 프로그램 v1.0\n");
	printf("------------------------------------\n");
	printf("1. num1 입력 => ");
	scanf_s("%d", &calcNum1);

	printf("2. num2 입력 => ");
	scanf_s("%d", &calcNum2);

	printf("3. 연산자 입력(+, -, *, /) => ");
	getchar();
	scanf_s("%c", &calcCh, sizeof(char));
	switch (calcCh) {
	case '+':
		printf("%d + %d = %d", calcNum1, calcNum2, calcNum1 + calcNum2);
		break;
	case '-':
		printf("%d - %d = %d", calcNum1, calcNum2, calcNum1 - calcNum2);
		break;
	case '*':
		printf("%d * %d = %d", calcNum1, calcNum2, calcNum1 * calcNum2);
		break;
	case '/':
		printf("%d / %d = %d", calcNum1, calcNum2, calcNum1 / calcNum2);
		break;
	}
	/*
	3. 자판기에서 담배를 선택하여 출력하는 프로그램.
		조건1) 자판기에 입력한 금액에 대한 거스름돈 처리 필요.

		---------------------------- -
		담배 자판기 프로그램 v1.0
		---------------------------- -
		원하는 음료수를 메뉴에서 선택하세요.

		1. 에쎄 골든 리프   6,000원
		2. 에쎄 스페셜 골드  5,000원
		3. 더원 블루   4,500원
		4. 더원 오렌지  4,500원
		5. 더원 화이트  4,500원
		---------------------------- -
		담배를 선택하세요 = > 5
		더원 화이트를 선택하셨습니다.
		---------------------------- -
		담배 금액을 입금하세요 = > 10, 000
		더원 화이트를 구매했습니다.거스름돈 5, 500원을 받으세요.
		[출처] https://blog.naver.com/hack4ork/221690105166
	*/
	int selectVendNum;
	printf("\n\n============ 문제 3 ============\n");
	printf("------------------------------------\n");
	printf("\t담배 자판기 프로그램 v1.0\n");
	printf("------------------------------------\n");
	printf("원하는 음료수를 메뉴에서 선택하세요.\n\n");
	printf("1. 에쎄 골든 리프    6,000원\n");
	printf("2. 에쎄 스페셜 골드  5,000원\n");
	printf("3. 더원 블루        4,500원\n");
	printf("4. 더원 오렌지      4,500원\n");
	printf("5. 더원 화이트      4,500원\n");
	printf("------------------------------------\n");
	printf("담배를 선택하세요 => ");
	scanf_s("%d", &selectVendNum);
	switch (selectVendNum) {
	case 1:
		printf("에쎄 골든 리프를 선택하셨습니다.\n");
		break;
	case 2:
		printf("에쎄 스페셜 골드를 선택하셨습니다.\n");
		break;
	case 3:
		printf("더원 블루를 선택하셨습니다.\n");
		break;
	case 4:
		printf("더원 오렌지를 선택하셨습니다.\n");
		break;
	case 5:
		printf("더원 화이트를 선택하셨습니다.\n");
		break;
	default:
		printf("잘못된 번호를 선택하셨습니다.\n");
	}
	int inputMoney;
	printf("------------------------------------\n");
	printf("담배 금액을 입금하세요 => ");
	scanf_s("%d", &inputMoney);
	switch (selectVendNum) {
	case 1:
		if (inputMoney >= 6000) {
			printf("에쎄 골든 리프를 구매했습니다. 거스름돈 %d원을 받으세요.\n", inputMoney - 6000);
		}
		else {
			printf("돈이 모자랍니다.\n");
		}
		break;
	case 2:
		if (inputMoney >= 5000) {
			printf("에쎄 스페셜 골드를 구매했습니다. 거스름돈 %d원을 받으세요.\n", inputMoney - 5000);
		}
		else {
			printf("돈이 모자랍니다.\n");
		}
		break;
	case 3:
		if (inputMoney >= 4500) {
			printf("더원 블루를 구매했습니다. 거스름돈 %d원을 받으세요.\n", inputMoney - 4500);
		}
		else {
			printf("돈이 모자랍니다.\n");
		}
		break;
	case 4:
		if (inputMoney >= 4500) {
			printf("더원 오렌지를 구매했습니다. 거스름돈 %d원을 받으세요.\n", inputMoney - 4000);
		}
		else {
			printf("돈이 모자랍니다.\n");
		}
		break;
	case 5:
		if (inputMoney >= 4500) {
			printf("더원 화이트를 구매했습니다. 거스름돈 %d원을 받으세요.\n", inputMoney - 4000);
		}
		else {
			printf("돈이 모자랍니다.\n");
		}
		break;
	default:
		printf("잘못된 번호를 선택하셨습니다.\n");
	}

	return 0;
}
