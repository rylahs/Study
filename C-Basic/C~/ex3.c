// 3번째 함수 유형
// 리턴타입 함수명() -> 리턴값은 반드시 1개만 가능
#include <stdio.h>

void title_c()
{
	printf("----------------------------\n");
	printf("간단한 계산기 v1.2\n");
	printf("----------------------------\n");
}
double calc3()
{
	double num5, num6;
	char chC3;
	printf("계산할 숫자를 입력해주세요\n");
	printf("숫자 1 입력 : ");
	scanf_s("%lf", &num5);
	printf("숫자 2 입력 : ");
	scanf_s("%lf", &num6);
	printf("계산할 연산을 입력해주세요(+, -, *, /) : ");
	scanf_s(" %c", &chC3, sizeof(char));
	switch (chC3)
	{
	case '+':
		printf("%.0lf + %.0lf = ", num5, num6);
		return num5 + num6;

	case '-':
		printf("%.0lf - %.0lf = ", num5, num6);
		return num5 - num6;

	case '*':
		printf("%.0lf * %.0lf = ", num5, num6);
		return num5 * num6;

	case '/':
		printf("%.1lf / %.1lf = ", num5, num6);
		return (double)num5 / num6;

	default:
		printf("잘못된 문자가 입력되었습니다.\n");
		return -1;
	}
}

int main_func3(void)
{
	title_c();
	double result;
	// 리턴 받아서 main()에서 값 출력
	result = calc3();
	printf("%.4lf\n", result);
	return 0;
}