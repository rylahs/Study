// 문제 2. 섭씨(Celsius)온도를 입력하면 화씨(Fahrenheit)온도를 반환하는 CelToFah라는 이름의 함수와
//		  그 반대로 화씨 온도를 입력하면 섭씨 온도를 반환하는 FahTocel이라는 이름의 함수를 정의하고 이 두 함수를 호출하는 예제를 완성해보자.
//		  참고로 섭씨와 화씨간의 온도변환 공식은 다음과 같다.
// Fah = 1.8 * Cel + 32
#include <stdio.h>

double FahToCel(double Fah)  // 화씨를 섭씨로 변환
{
	return (Fah - 32) / 1.8;
}
double CelToFah(double Cel) // 섭씨를 화씨로 변환
{ 
	return 1.8 * Cel + 32;
}

int main_2(void)
{
	double Cel, Fah;
	int selectMode;

	printf("섭씨-> 화씨 온도 변환 or 화씨 -> 섭씨 변환하는 프로그램입니다.\n");
	printf("원하는 연산을 선택해주세요 (1. 섭씨-> 화씨 온도, 2. 화씨 -> 섭씨 온도) : ");
	scanf_s("%d", &selectMode);

	if (selectMode == 1) {
		printf("섭씨 온도를 입력해주세요 : ");
		scanf_s("%lf", &Cel);

		printf("%.2lf 섭씨 온도 -> %.2lf 화씨온도 입니다.\n", Cel, CelToFah(Cel));
	}
	else if (selectMode == 2) {
		printf("화씨 온도를 입력해주세요 : ");
		scanf_s("%lf", &Fah);

		printf("%.2lf 섭씨 온도 -> %.2lf 화씨온도 입니다.\n", Fah, FahToCel(Fah));

	}

	else {
		printf("잘못 입력하셨습니다.\n");
	}
}