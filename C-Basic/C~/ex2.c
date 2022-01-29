#include <stdio.h>
// 모듈화 : 필요한 기능들을 함수별로 정리
void title_b()
{
	printf("----------------------------\n");
	printf("간단한 계산기 v1.1\n");
	printf("----------------------------\n");
}
// 2번째 함수 유형
// void 함수명(매개변수)
void calc2(double n1, double n2, char ch)
{	// 매개변수를 활용해서 함수 작성
	switch (ch)
	{
	case '+':
		printf("%.0lf + %.0lf = %.0lf", n1, n2, n1 + n2);
		break;
	case '-':
		printf("%.0lf - %.0lf = %.0lf", n1, n2, n1 + n2);
		break;
	case '*':
		printf("%.0lf * %.0lf = %.0lf", n1, n2, n1 * n2);
		break;
	case '/':
		printf("%.0lf / %.0lf = %.0lf", n1, n2, n1 / n2);
		break;
	default:
		printf("잘못된 문자가 입력되었습니다.\n");
	}
}
int main_ex2(void)
{

	title_b();

	double num1, num2;
	char calcCh;
	printf("계산할 숫자를 입력해주세요\n");
	printf("숫자 1 입력 : ");
	scanf_s("%lf", &num1);
	printf("숫자 2 입력 : ");
	scanf_s("%lf", &num2);
	printf("계산할 연산을 입력해주세요(+, -, *, /) : ");
	scanf_s(" %c", &calcCh, sizeof(char));

	calc2(num1, num2, calcCh);

	return 0;
}