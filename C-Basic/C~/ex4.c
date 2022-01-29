// 4. 리턴타입 함수명


#include <stdio.h>

void title_d()
{
	printf("----------------------------\n");
	printf("간단한 계산기 v1.3\n");
	printf("----------------------------\n");
}
double calc4(double a, double b, char ch)
{
	switch (ch)
	{
	case '+':
		printf("%.0lf + %.0lf = ", a, b);
		return a + b;

	case '-':
		printf("%.0lf - %.0lf = ", a, b);
		return a - b;

	case '*':
		printf("%.0lf * %.0lf = ", a, b);
		return a * b;

	case '/':
		printf("%.1lf / %.1lf = ", a, b);
		return (double)a / b;

	default:
		printf("잘못된 문자가 입력되었습니다.\n");
		return -1;
	}
}

int main(void)
{
	title_d();
	
	double num5, num6;
	char chC4;
	printf("계산할 숫자를 입력해주세요\n");
	printf("숫자 1 입력 : ");
	scanf_s("%lf", &num5);
	printf("숫자 2 입력 : ");
	scanf_s("%lf", &num6);
	printf("계산할 연산을 입력해주세요(+, -, *, /) : ");
	scanf_s(" %c", &chC4, sizeof(char));
		
	double resultD;
	
	resultD = calc4(num5, num6, chC4);
	printf("%.4lf\n", resultD);

	return 0;
}