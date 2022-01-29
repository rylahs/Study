#include <stdio.h>

int main_hw2(void) {
	/*
	기본 알고리즘 두번째 연산자
	1. 홀수, 짝수인지를 판단하는 프로그램을 만드세요.
		조건1) 숫자 1개를 입력받으세요.
		조건2) 삼항 연산자를 사용하여 홀, 짝수인지를 판단하여 출력.
		[출처] https://blog.naver.com/hack4ork/221682679110
	*/
	int number;
	printf("============ 문제 1 ============\n");
	printf("Find Even or Odd Number Program\n");
	printf("Input Number : ");
	scanf_s("%d", &number);
	
	printf("%s\n", (number % 2 == 0) ? "짝수입니다." : "홀수입니다.");

	/*
	2. 최대, 최소값을 구하는 프로그램을 만드세요. (삼항 연산자 사용)
		순서1) 최대, 최소값을 입력받을 변수를 생성하고 초기값 0으로 설정.
		순서2) 정수 2개를 입력받으세요.
		순서3) 최대, 최소값을 출력하세요.
		[출처] https://blog.naver.com/hack4ork/221682679110
	*/
	
	int number1 = 0, number2 = 0;
	printf("\n\n============ 문제 2 ============\n");
	printf("Find Max or Min Number Program\n");
	printf("Input Number 1 : ");
	scanf_s("%d", &number1);
	
	printf("Input Number 2 : ");
	scanf_s("%d", &number2);

	printf("Max Number : %d\n", (number1 > number2) ? number1 : number2);
	printf("Min Number : %d\n", (number1 < number2) ? number1 : number2);



	/*
	3. 동전 교환기 프로그램을 작성.
		조건1) 동전은 각각 500원, 100원 50원 10원이 사용됨.
		조건2) 동전의 각각의 갯수를 저장할 변수들을 만들고 초기값 0으로 설정.
		조건3) 특정 금액의 지폐를 입력받으세요. (예: 1000)
		조건4) 지폐를 500원 동전 갯수 구함.
		조건5) 나머지 금액이 있으면 100원 동전 갯수 구함.
		조건6) 나머지 금액이 있으면 50원 동전 갯수 구함.
		조건7) 나머지 금액이 있으면 10원 동전 갯수 구함.
		조건8) 반드시 아래와 같은 형태로 출력하기 바람.
		--------------------------------
		   동전 교환기 프로그램 1.0
		--------------------------------
		오백원 갯수 : ?개
		백원 갯수   : ?개
		오십원 갯수 : ?개
		십원 갯수   : ?개
		바꾸지 못한 잔돈 : ?개
		--------------------------------
		[출처] https://blog.naver.com/hack4ork/221682679110
	*/
	int inputMoney;
	printf("\n\n============ 문제 3 ============\n");
	printf("Input Money : ");
	scanf_s("%d", &inputMoney);
	printf("------------------------------------\n");
	printf("\t동전 교환기 프로그램 1.0\n");
	printf("------------------------------------\n");
	printf("오백원 갯수     : %d\n", inputMoney / 500);
	printf("백원 갯수       : %d\n", inputMoney % 500 / 100);
	printf("오십원 갯수     : %d\n", inputMoney % 500 % 100 / 50);
	printf("십원 갯수       : %d\n", inputMoney % 500 % 100 % 50 / 10);
	printf("바꾸지 못한 잔돈 : %d\n", inputMoney % 500 % 100 % 50 % 10);

	return 0;
}