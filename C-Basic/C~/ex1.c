#include <stdio.h>
// 모듈화 : 필요한 기능들을 함수별로 정리
void title_a()
{
	printf("----------------------------\n");
	printf("간단한 계산기 v1.0\n");
	printf("----------------------------\n");
}
void calc() {
	int num1, num2;
	char calcCh;
	printf("계산할 숫자를 입력해주세요\n");
	printf("숫자 1 입력 : ");
	scanf_s("%d", &num1);
	printf("숫자 2 입력 : ");
	scanf_s("%d", &num2);
	printf("계산할 연산을 입력해주세요(+, -, *, /) : ");
	scanf_s(" %c", &calcCh, sizeof(char));
	switch (calcCh)
	{
	case '+':
		printf("%d + %d = %d", num1, num2, num1 + num2);
		break;
	case '-':
		printf("%d - %d = %d", num1, num2, num1 + num2);
		break;
	case '*':
		printf("%d * %d = %d", num1, num2, num1 * num2);
		break;
	case '/':
		printf("%d / %d = %d", num1, num2, num1 / num2);
		break;
	default:
		printf("잘못된 문자가 입력되었습니다.\n");
	}
}


int main_ex1(void)
{

	title_a();

	calc();
	//int num1, num2;
	//char calcCh;
	
	
	//calc2(num1, num2, calcCh);
	//2개의 숫자와 1개의 문자(+, -, *, /)를 입력받아서
	//계산하는 계산기 프로그램
	// 1번째 형태로 작업 void 함수
	
	return 0;
}