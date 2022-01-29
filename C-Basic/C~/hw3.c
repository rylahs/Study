#include <stdio.h>

int main_hw3(void) {
	/*
	1. 1개의 숫자를 입력 받아서 짝수, 홀수인지 판단하는 프로그램.
		(나머지 연산을 사용하면 쉬움)
		-----------------------------
		 홀짝 판단 프로그램 v1.0
		-----------------------------
		숫자 입력 => 10

		출력은 아래중에 1개를 출력.
		1) 입력한 숫자는 홀수입니다.
		2) 입력한 숫자는 짝수입니다.

		[출처] https://blog.naver.com/hack4ork/221689344636
	*/
	int number;
	printf("============ 문제 1 ============\n");
	printf("------------------------------------\n");
	printf("\t홀짝 판단 프로그램 v1.0\n");
	printf("------------------------------------\n");
	printf("숫자 입력 => ");
	scanf_s("%d", &number);

	if (number % 2 == 0)
		printf("입력한 숫자는 짝수입니다.\n");
	else
		printf("입력한 숫자는 홀수입니다.\n");
	

	/*
	2. 2개의 숫자를 입력 받아서 크다, 작다를 비교하는 프로그램
		-----------------------------
		 대소 비교 프로그램 v1.0
		-----------------------------
		1. num1 입력 => 10
		2. num2 입력 => 5

		출력은 아래의 3개중에 하나를 출력 바람.
		1) num1이 num2보다 크다.
		2) num2가 num1보다 크다.
		3) num1과 num2는 같다.

		[출처] https://blog.naver.com/hack4ork/221689344636
	*/
	int number1, number2;
	printf("\n\n============ 문제 2 ============\n");
	printf("------------------------------------\n");
	printf("\t대소 비교 프로그램 v1.0\n");
	printf("------------------------------------\n");
	printf("1. num1 입력 => ");
	scanf_s("%d", &number1);

	printf("2. num2 입력 => ");
	scanf_s("%d", &number2);

	if (number1 > number2)
		printf("%d이 %d보다 크다\n", number1, number2);
	else if (number1 < number2)
		printf("%d이 %d보다 크다\n", number2, number1); 
	else
		printf("%d과 %d는 같다\n", number1, number2);


	/*
	3. 2개의 숫자를 입력받아서 +, -, X, / 연산자를 사용하는 간단한 계산기.
		-----------------------------
		 간단한 계산기 프로그램 v1.0
		-----------------------------
		1. Num1 입력 => 10
		2. Num2 입력 => 5

		3. 연산자 입력(+, -, *, /) => +

		출력은 아래의 형태로 출력 바람.
		10 + 5 = 15



		[출처] https://blog.naver.com/hack4ork/221689344636
	*/
	int calcNum1, calcNum2;
	char calcCh;
	printf("\n\n============ 문제 3 ============\n");
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
	if (calcCh == '+')
		printf("%d + %d = %d", calcNum1, calcNum2, calcNum1 + calcNum2);
	else if (calcCh == '-')
		printf("%d - %d = %d", calcNum1, calcNum2, calcNum1 - calcNum2);
	else if (calcCh == '*')
		printf("%d * %d = %d", calcNum1, calcNum2, calcNum1 * calcNum2);
	else if (calcCh == '/')
		printf("%d / %d = %d", calcNum1, calcNum2, calcNum1 / calcNum2);
	else {
		printf("잘못된 연산자를 입력했습니다.\n");
	}
	
	/*
	4. 년도를 입력받아서 윤년을 구분하는 프로그램.
		순서1) 입력한 년도를 4로 나누면 나머지가 0이고 100으로 나누면 0이 아니어야 함.
		순서2) 입력한 년도를 400으로 나누면 나머지가 0 이어야 함.
		순서3) 조건1에서는 AND 논리연산자를 사용.
		순서4) 조건1과 조건2는 OR 논리연산자를 사용.
		-----------------------------
		 년도별 윤년 구분 프로그램 v1.0
		-----------------------------
		년도 입력 => 2016



		출력은 아래의 2개중에 하나를 출력 바람.
		1) 2016년은 윤년이 아닙니다.
		2) 2016년은 윤년입니다.
		[출처] https://blog.naver.com/hack4ork/221689344636
	*/
	int inputYear;
	
	printf("\n\n============ 문제 4 ============\n");
	printf("------------------------------------\n");
	printf("\t년도별 윤년 구분 프로그램 v1.0\n");
	printf("------------------------------------\n");
	printf("년도 입력 => ");
	scanf_s("%d", &inputYear);

	if ((inputYear % 4 == 0 && inputYear % 100 != 0) || inputYear % 400 == 0)
		printf("%d년은 윤년입니다.\n", inputYear);
	else
		printf("%d년은 윤년이 아닙니다.\n", inputYear);
	/*
	5. 국어, 영어, 수학 점수를 입력받아서 합과 평균을 구하여 학점을 출력하는 프로그램.
		-----------------------------
		 학점 관리 프로그램 v1.0
		-----------------------------
		 100 ~ 90 : A학점
		  89 ~ 80 : B학점
		  79 ~ 70 : C학점
		  69 ~ 60 : D학점
		  59 ~ 50 : E학점
		  49 ~ 0  : F학점
		-----------------------------

		[입력 형식]
		1. 국어 점수 입력 => 100
		2. 영어 점수 입력 => 80
		3. 수학 점수 입력 => 90

		[출력 형식]
		총점 270
		평균 90
		학점은 A입니다.
		[출처] https://blog.naver.com/hack4ork/221689344636
	*/
	printf("\n\n============ 문제 5 ============\n");
	printf("------------------------------------\n");
	printf("\t학점 관리 프로그램 v1.0\n");
	printf("------------------------------------\n");
	printf("\t100 ~ 90 : A학점\n");
	printf("\t 89 ~ 80 : B학점\n");
	printf("\t 79 ~ 70 : C학점\n");
	printf("\t 69 ~ 60 : D학점\n");
	printf("\t 59 ~ 50 : E학점\n");
	printf("\t 49 ~ 0  : F학점\n");
	printf("------------------------------------\n");

	int korScoreInput, engScoreInput, mathScoreInput;
	printf("1. 국어 점수 입력 => ");
	scanf_s("%d", &korScoreInput);
	printf("2. 영어 점수 입력 => ");
	scanf_s("%d", &engScoreInput);
	printf("3. 수학 점수 입력 => ");
	scanf_s("%d", &mathScoreInput);
	int sumScore = korScoreInput + engScoreInput + mathScoreInput;
	double avgScore = sumScore / 3;
	printf("\n총점 %d\n", sumScore);
	printf("평균 %.2lf", avgScore);
	if (avgScore >= 90 && avgScore <= 100)
		printf("학점은 A입니다.\n");
	else if (avgScore >= 80 && avgScore <= 89)
		printf("학점은 B입니다.\n");
	else if (avgScore >= 70 && avgScore <= 79)
		printf("학점은 C입니다.\n");
	else if (avgScore >= 60 && avgScore <= 69)
		printf("학점은 D입니다.\n");
	else if (avgScore >= 50 && avgScore <= 59)
		printf("학점은 E입니다.\n");
	else if (avgScore < 50)
		printf("학점은 F입니다.\n");
	else
		printf("값이 범위를 벗어났습니다.\n");


	return 0;
}